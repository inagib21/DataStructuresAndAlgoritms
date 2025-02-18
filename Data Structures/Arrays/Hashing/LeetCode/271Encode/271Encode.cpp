

//Input
/*
We are given a list of strings
*/

//What DS/Algo/Technique
/*
Delimiter-based encoding approach.
*/

//What to do with the data
/*
Encoding
        we have a list of strings
        make them into a single string
Steps:
1. Initialize an empty string 'encoded'
2. Iterate over each string 's' in our list of strings 'strs'
    2.1 We will append the length of string to encoded followed bya. delimiter
    2.2 Append our string (s) to encoded
3. Return encoded

Decoding 
        take the single string
        make the single string into a list of strings

Steps:
1. Initialize an empty vector of strings 'decoded'
2. Initialize an index 'i' to 0
3. While i is less than the length of the encoded string
    3.1 Find the position of the delimiter in the encoded string starting from index 'i'
    3.2 Extract the length of the string from the encoded string based on the delimiter position
    3.3 Move the index i to the position after the delimiter
    3.4 Extract the actual string form the encoded string based on the length
    3.5 Append the extracted string to decoded
    3.6 Update the index i to the position after the extracted string
4. Return the decoded


Creating our delimiter
It will be a private character indicaded as '/'
*/

//Output
/*
We need to fill in the functions for encoding and decoding. 
For encoding we need to return the encoded string. 
For decoding we need to return the lof decoded strings.
*/

#include <vector>
#include <string>

class Codec {
    public:
        // Encodes a list of strings to a single string.
        string encode(vector<string>& strs) {
            //Step 1
            string encoded;
            //Step 2
            for(const string& s: strs){
                //2.1
                encoded += to_string(s.length()) + delimiter;
                //2.2
                encoded += s;
            }
    
            //Step 3
            return encoded;
        }
    
        // Decodes a single string to a list of strings.
        vector<string> decode(string s) {
            //Step 1
            vector<string> decoded;
            //Step 2
            int i = 0;
    
            //Step 3   
            while(i < s.length()){
                //3.1
                size_t delimiterPos = s.find(delimiter, i);
                //3.2
                int length = stoi(s.substr(i, delimiterPos - i));
                //3.3 
                i = delimiterPos + 1;
                //3.4            
                string str = s.substr(i, length);
                //3.5
                decoded.push_back(str);
                //3.6   
                i += length;         
            }   
            //Step 4
            return decoded;
        }
        //Delimiter
        private:
            const char delimiter = '/';
    };
    
    // Your Codec object will be instantiated and called as such:
    // Codec codec;
    // codec.decode(codec.encode(strs));
    
    