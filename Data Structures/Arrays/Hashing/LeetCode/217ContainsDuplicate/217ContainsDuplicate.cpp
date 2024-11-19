
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {  
// Defines a class named `Solution`. 
// A class is a blueprint for creating objects that can contain methods (functions) and data.
public:  
    // The `public` keyword makes the following methods accessible from outside the class.
    bool containsDuplicate(vector<int>& nums) {  
        // Declares a method `containsDuplicate` that takes a reference to a `vector<int>` (a list of integers).
        // It returns a `bool` value: `true` if a duplicate is found, `false` otherwise.
        unordered_set<int> seen;  
        // Creates an empty `unordered_set` named `seen`. 
        // The set will store unique integers that we encounter while iterating through `nums`.
        for (int num : nums) {  
            // A `for` loop that iterates through each integer `num` in the `nums` vector.
            // In each iteration, `num` takes on the value of one element in the vector.
            if (seen.count(num)) {  
                // Checks if the current number `num` is already in the `seen` set.
                // The `count` method returns `1` if the element exists in the set, otherwise `0`.
                return true;  
                // If the number is found in the set, it means we have a duplicate.
                // Return `true` immediately and exit the method.
            }
            seen.insert(num);  
            // If the number is not in the set, add it using the `insert` method.
            // This ensures the set tracks all unique numbers we've seen so far.
        }
        return false;  
        // If the loop completes without finding any duplicates, return `false`.
        // This means all numbers in the vector are unique.
    }
};
// Example usage:  
// This part shows how you would use the `Solution` class in a real program.

#include <iostream>  
// Includes the <iostream> library for input/output operations, such as printing to the console.

int main() {  
    Solution solution;  
    // Creates an instance of the `Solution` class.

    vector<int> nums = {1, 2, 3, 1};  
    // Creates a `vector<int>` named `nums` and initializes it with the values `[1, 2, 3, 1]`.

    cout << solution.containsDuplicate(nums);  
    // Calls the `containsDuplicate` method on the `solution` object and passes `nums` as the argument.
    // The result (`true` or `false`) is printed to the console.

    return 0;  
    // Ends the program and returns `0` to indicate that it ran successfully.
}



#include <unordered_set>
#include <vector>
using namespace std;

// Same solution but with less comments 
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