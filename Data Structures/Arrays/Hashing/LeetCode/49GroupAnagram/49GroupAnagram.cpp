#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Dictionary to store sorted word as key and a list of anagrams as values
        unordered_map<string, vector<string>> anagrams;

        // Iterate through each word in the input list
        for (string& word : strs) {
            // Sort the word to use as a key
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());

            // Group the anagrams by their sorted key
            anagrams[sorted_word].push_back(word);
        }

        // Prepare the result: return all values from the map
        vector<vector<string>> result;
        for (auto& pair : anagrams) {
            result.push_back(pair.second);
        }

        return result;
    }
};
