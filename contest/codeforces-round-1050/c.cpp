// https://codeforces.com/contest/2148/problem/C
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
#define FOR(a, b) for(int i=a;i<b;i++)
#define FO(n) for(int i=0;i<n;i++)
#define FE(x, a) for (auto &x : a)
using namespace std;

void solve()
{
  int n, m, a, b, point = 0, lIndex = 0, lSide = 0;
  cin >> n >> m;

  FO(n)
  {
    cin >> a >> b;
    int dis = a - lIndex - 1;
    if (!dis) point += b != lSide;
    else
    {
      point += dis + 1;
      if (b == lSide && dis % 2 == 0) point--;
      if (b != lSide && dis % 2 == 1) point--;
    }

    lIndex = a;
    lSide = b;
  }

  if (lIndex < m) point += m - lIndex;
  cout << point << el;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}
