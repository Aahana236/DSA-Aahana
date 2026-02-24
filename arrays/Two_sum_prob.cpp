/*
Problem: Two Sum
Approach: Hash map (unordered_map)
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            cout << "Indices: " << mp[complement] << " and " << i << endl;
            return 0;
        }

        mp[nums[i]] = i;
    }

    cout << "No two sum solution found.";
    return 0;
}