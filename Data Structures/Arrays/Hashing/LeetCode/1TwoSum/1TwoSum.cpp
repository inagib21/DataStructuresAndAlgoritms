// This solution uses an unordered hashmap 
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup; // Stores value-to-index mapping

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement

            // Check if the complement exists in the map
            if (lookup.find(complement) != lookup.end()) {
                // If found, return the indices of the complement and the current number
                return {lookup[complement], i};
            }

            // Store the current number and its index in the map
            lookup[nums[i]] = i;
        }

        // Return an empty vector if no solution is found (problem guarantees one solution)
        return {};
    }
};

// this 
