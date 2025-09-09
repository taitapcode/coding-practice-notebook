// https://leetcode.com/problems/apply-operations-to-an-array/description/
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

vector<int> applyOperations(vector<int>& nums)
{
  int len = nums.size();
  int idx = 0;

  for (int i = 0; i < len - 1; i++)
    if (nums[i] == nums[i + 1])
    {
      nums[i] *= 2;
      nums[i + 1] = 0;
    }

  for (int& x : nums)
    if (x != 0) nums[idx++] = x;

  while (idx < len) nums[idx++] = 0;

  return nums;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<int> nums(n);
  for (int& x : nums) cin >> x;

  vector<int> ans = applyOperations(nums);
  for (int& x : ans) cout << x << ' ';

  return 0;
}
