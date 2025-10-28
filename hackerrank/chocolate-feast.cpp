// https://www.hackerrank.com/challenges/chocolate-feast/
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FO(i, n) for(int i = 0; i < n; i++)
#define FE(x, a) for (auto &x : a)
using namespace std;

void solve()
{
  int n, c, m;
  cin >> n >> c >> m;

  int ans = n / c, wrappers = ans;
  while (wrappers >= m)
  {
    int bar = wrappers / m;
    ans += bar;
    wrappers = bar + wrappers % m;
  }

  cout << ans << el;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}
