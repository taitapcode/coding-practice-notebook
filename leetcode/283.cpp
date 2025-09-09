// https://leetcode.com/problems/move-zeroes/
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

void moveZeroes(vector<int>& nums)
{
  int idx = 0;
  for (int& x : nums)
    if (x != 0)
      nums[idx++] = x;

  while (idx < nums.size())
    nums[idx++] = 0;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<int> nums = {0, 1, 0, 3, 12};

  moveZeroes(nums);

  for (int& x : nums)
    cout << x << " ";

  return 0;
}
