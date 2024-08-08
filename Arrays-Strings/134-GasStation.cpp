// 134. Gas Station
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        cin.tie(nullptr);
        cout.tie(nullptr);
        ios_base::sync_with_stdio(false);
        int n = gas.size();
        // -1 means there is not a possible startingIndex found
        int startingIndex = -1;
        int currentGas = 0;
        bool circuitCompleted = false;

        for (int i = 0; i < n; i++) {
          if (currentGas + gas[i] >= cost[i]) { // car can move to the next station
            if (startingIndex == -1) startingIndex = i;
            currentGas += gas[i] - cost[i];
          } else {
            currentGas = 0;
            startingIndex = -1;
          }
        }
        for (int i = 0; i < startingIndex; i++) {
          currentGas += gas[i] - cost[i];
          if (currentGas < 0) return -1;
        }
        return startingIndex;
    }
};
