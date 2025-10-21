// https://codeforces.com/contest/2148/problem/A
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
#define FOR(a, b) for(int i=a;i<b;i++)
#define FO(n) for(int i=0;i<n;i++)
#define FE(x, a) for (auto &x : a)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

void solve()
{
  int x, n;
  cin >> x >> n;
  cout << (n % 2 ? x : 0) << el;
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
