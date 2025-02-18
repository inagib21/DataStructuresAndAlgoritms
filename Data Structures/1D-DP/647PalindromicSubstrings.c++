#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size(), count = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        for (int len = 1; len <= n; len++) { // Length of substring
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1; // End index
                if (s[i] == s[j]) {
                    if (len == 1 || len == 2) 
                        dp[i][j] = true; // Single character or two identical chars
                    else 
                        dp[i][j] = dp[i+1][j-1]; // Check inner substring
                    
                    if (dp[i][j]) count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    string s = "aaa";
    cout << sol.countSubstrings(s) << endl; // Output: 6
    return 0;
}
