#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;  // Duplicate found
            }
            seen.insert(num);  // Add to the set
        }
        return false;  // No duplicates
    }
};

// Example usage:
// #include <iostream>
// int main() {
//     Solution solution;
//     vector<int> nums = {1, 2, 3, 1};
//     cout << solution.containsDuplicate(nums);  // Output: 1 (true)
// }