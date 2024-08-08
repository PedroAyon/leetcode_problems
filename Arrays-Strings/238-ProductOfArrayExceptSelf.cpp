#include "bits/stdc++.h"
#include <ios>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int p = 1;
      int zeros = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0)
          p *= nums[i];
        else
         zeros++;
      }
      for (int i = 0; i < nums.size(); i++) {
        if (zeros == 0) {
          nums[i] = p / nums[i];
          continue;
        }
        if (zeros == 1 && nums[i] == 0) nums[i] = p;
        else nums[i] = 0;
      }
      return nums;
    }
};
