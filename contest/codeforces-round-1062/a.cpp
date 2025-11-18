// https://codeforces.com/contest/2167/problem/A
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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << (a == b && b == c && c == d ? "YES" : "NO") << el;
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
