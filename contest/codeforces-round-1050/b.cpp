// https://codeforces.com/contest/2148/problem/B
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
#define FOR(a, b) for(int i=a;i<b;i++)
#define FO(n) for(int i=0;i<n;i++)
#define FE(x, a) for (auto &x : a)
using namespace std;

int n, m, x, y, a, b;
void solve()
{
  cin >> n >> m >> x >> y;
  FO(n) cin >> a;
  FO(m) cin >> b;

  cout << (m + n) << el;
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
