// Problem: https://thilaptrinh.uit.edu.vn/wecode/assignment/4/10
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int n, m, k, area[1001][1001], s = 0;

void dfs(int x, int y)
{
  if (x < 1 || x > n || y < 1 || y > m || area[x][y] == 0) return;
  s++;
  area[x][y] = 0;
  dfs(x + 1, y);
  dfs(x - 1, y);
  dfs(x, y + 1);
  dfs(x, y - 1);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m >> k;

  int x, y;
  while (k--)
  {
    cin >> x >> y;
    area[x][y] = 1;
  }

  int maxS = 0;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      if (area[i][j] == 1)
      {
        s = 0;
        dfs(i, j);
        maxS = max(maxS, s);
      }

  cout << maxS << el;

  return 0;
}
