from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = {}  # Dictionary to store grouped anagrams

        for word in strs:
            # Sort the word to use as a key
            sorted_word = ''.join(sorted(word))
            
            # Group words by their sorted key
            if sorted_word not in anagrams:
                anagrams[sorted_word] = []
            anagrams[sorted_word].append(word)

        # Return grouped anagrams as a list of lists
        return list(anagrams.values())
    
    """
    Explanation:
Initialize a Dictionary:

anagrams is a dictionary where the key is the sorted version of a word, and the value is a list of words (anagrams).
Iterate Over Input Strings:

For each word in strs, calculate its sorted version:
''.join(sorted(word)): Sorts the characters in the word and converts them back to a string.
Group Words by Sorted Key:

If the sorted version of the word is not a key in the dictionary, add it with an empty list as the value.
Append the current word to the list corresponding to its sorted key.
Return Grouped Anagrams:

Use list(anagrams.values()) to return all the grouped lists of anagrams.
Complexity:
Time Complexity:

Sorting each word: 
𝑂(𝑘logZ)
O(klogk), where 𝑘
k is the average length of words.
Iterating over 𝑛n words: 𝑂(𝑛⋅𝑘log𝑘)
O(n⋅klogk).
Total: 𝑂(𝑛⋅𝑘log⁡𝑘)
O(n⋅klogk).
Space Complexity:
The dictionary anagrams stores all the words, so 𝑂(𝑛⋅𝑘)
O(n⋅k) space for the keys and values.    
    """