#include <vector>
using namespace std;
/*
need an iterator i  to read through nums
need to multiply answer not including nums[i]
the apporach below is brute force and not efficient
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
         for (int i= 0;i<n; i++){
            int product= 1;
            for (int j = 0; j<n; j++){
            if(i == j) continue;
            product *= nums[j];
         }
         output.push_back(product);
        }
         return output;
    }
   
};

/* this is a better approach Time & Space Complexity
✅ Time Complexity: O(n), since we traverse the array twice.
✅ Space Complexity: O(1), since we only use the output array (ignoring input storage).
Patterns to Recognize
Prefix & Suffix Technique


Used when elements depend on both previous and next values (e.g., rainwater trapping, subarray product).
Two-Pass Method
If "prefix & suffix" sounds a bit abstract, think of it as "Left and Right Products" or "Before and After Products". The idea is simple:

Prefix Product = Product of all elements BEFORE the current index
Suffix Product = Product of all elements AFTER the current index
This approach helps solve problems where each element depends on both previous and future elements without recalculating them multiple times.



Often used to avoid O(n²) nested loops by computing prefixes first, then suffixes.
In-Place Modification

The output array is modified directly to save space.
*/
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1); // Initialize output with 1s

        // Step 1: Compute prefix products
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            output[i] = prefix;  // Store product before i
            prefix *= nums[i];   // Update prefix for next iteration
        }

        // Step 2: Compute suffix products and update output
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= suffix; // Multiply with suffix product
            suffix *= nums[i];   // Update suffix for next iteration
        }

        return output;
    }
};

