// Problem: https://oj.vnoi.info/problem/nd_thpt_2223_a
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
#define FOR(a, b) for(int i=a;i<b;i++)
#define FO(n) for(int i=0;i<n;i++)
#define FE(x, a) for (auto &x : a)
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  // freopen("SODEP.inp", "r", stdin);
  // freopen("SODEP.out", "w", stdout);

  int n;
  cin >> n;

  int t = 0;
  while(n > 0)
  {
    t += n % 10;
    n /= 10;
  }

  cout << (t % 10 == 9);

  return 0;
}
