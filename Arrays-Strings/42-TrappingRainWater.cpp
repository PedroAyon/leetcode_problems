/*42. Trapping Rain Water*/
#include "bits/stdc++.h"
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
      cin.tie(nullptr);
      cout.tie(nullptr);
      ios_base::sync_with_stdio(false);
      int n = height.size();
      int maxPairHeight = 0, l = 0, r = n - 1, water = 0;
      while (l < r) {
        int aux = min(height[l], height[r]);
        if (aux > maxPairHeight) maxPairHeight = aux;
        water += max(maxPairHeight - aux, 0);
        height[l] <= height[r]? l++ : r--;
      }
      return water;
    }
};
