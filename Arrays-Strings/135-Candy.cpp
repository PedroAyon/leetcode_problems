// 135. Candy
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        cin.tie(nullptr);
        cout.tie(nullptr);
        ios_base::sync_with_stdio(false);
        int n = ratings.size();
        int candy[n];
        int total = 0;
        candy[0] = 1;
        for (int i = 1; i < n; i++) {
          if (ratings[i] > ratings[i - 1]) {
            candy[i] = candy[i-1] + 1;
          } else {
            candy[i] = 1;
          }
        }
        total += candy[n-1];
        for (int i = n - 2; i >= 0; i--) {
          if (ratings[i] > ratings[i+1] && candy[i] <= candy[i+1]) {
            candy[i] = candy[i+1] + 1;
          }
          total += candy[i];
        }
        return total;
        
    }
};
