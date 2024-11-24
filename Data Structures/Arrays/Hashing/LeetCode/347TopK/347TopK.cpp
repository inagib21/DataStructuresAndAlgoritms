#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count the frequency of each number in nums
        unordered_map<int, int> counter;  // Map to store number -> frequency
        for (int num : nums) {
            counter[num]++;
        }

        // Step 2: Use a min-heap (priority queue) to keep track of the top K elements
        // The heap stores pairs of (frequency, number), sorted by frequency
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (auto& [num, freq] : counter) {
            // Add the current number and its frequency to the heap
            minHeap.push({freq, num});
            if (minHeap.size() > k) {
                // If the heap size exceeds K, remove the smallest frequency element
                minHeap.pop();
            }
        }

        // Step 3: Extract the top K elements from the heap into the result vector
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);  // Add the number to the result
            minHeap.pop();  // Remove the top element from the heap
        }

        return result;  // Return the result vector
    }
};
