// Problem: https://oj.vnoi.info/problem/liq
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  int arr[n];
  for(int &x : arr) cin >> x;

  int maxLen = 1;
  vector<int> len(n + 1, INT_MAX);
  len[0] = INT_MIN;

  for(int &x : arr)
  {
    int index = lower_bound(len.begin(), len.end(), x) - len.begin();
    len[index] = x;
    maxLen = max(maxLen, index);
  }

  cout << maxLen;

  return 0;
}
