// https://codeforces.com/contest/2148/problem/D
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
#define FOR(a, b) for(int i=a;i<b;i++)
#define FO(n) for(int i=0;i<n;i++)
#define FE(x, a) for (auto &x : a)
using namespace std;

int n, odd[200005], a, m;
ll ans;
void solve()
{
  m = 0;
  ans = 0;
  cin >> n;

  while(n--)
  {
    cin >> a;
    if (a % 2 == 0) ans += a;
    else odd[m] = a, m++;
  }

  sort(odd, odd + m, greater<int>());

  if (!m) ans = 0;
  else
  {
    ans += odd[0];
    if (m > 1) FOR(1, (m - 1) / 2 + 1) ans += odd[i];
  }

  cout << ans << el;
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
