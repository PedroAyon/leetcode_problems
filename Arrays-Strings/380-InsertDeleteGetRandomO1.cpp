//380. Insert Delete GetRandom O(1)
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <vector>
#include "unordered_map"
using namespace std;

class RandomizedSet {
  public:
    vector<int> list;
    unordered_map<int, int> index_map;

    RandomizedSet() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }

    bool search(int val) {
      if (index_map.find(val) != index_map.end())
        return true;
      return false;
    }

    bool insert(int val) {
      if (search(val)) return false;
      list.push_back(val);
      index_map[val] = list.size() - 1;
      return true;
    }

    bool remove(int val) {
      if(!search(val)) return false;
      auto it = index_map.find(val);
      int index = it->second;
      list[index] = list.back();
      list.pop_back();
      index_map[list[index]] = index;
      index_map.erase(val);
      return true;

    }

    int getRandom() {
      return list[rand() % list.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

