// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int strStr(string haystack, string needle)
{
  int idx = haystack.find(needle);
  if (idx == string::npos) return -1;

  return idx;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string haystack, needle;
  cin >> haystack >> needle;

  cout << strStr(haystack, needle) << el;

  return 0;
}
