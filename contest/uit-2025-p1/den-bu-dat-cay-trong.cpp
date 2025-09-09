// Problem: https://thilaptrinh.uit.edu.vn/wecode/assignment/4/8
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int n;
ll mul = 1;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;

  int a;
  while (n--)
  {
    cin >> a;
    mul *= a;
  }

  ll sqrtMul = sqrt(mul);
  if (sqrtMul * sqrtMul == mul)
    cout << "Yes" << el;
  else
    cout << "No" << el;

  return 0;
}
