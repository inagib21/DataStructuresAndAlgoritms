from typing import List 

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Step 1: Create an empty dictionary to count the frequency of each number in nums
        counter = {}

        # Step 2: Iterate over each number in nums to populate the counter dictionary
        # For each number `n`, update its count. If it doesn't exist, set it to 0 first and then add 1.
        for n in nums:
            counter[n] = 1 + counter.get(n, 0)  # get(n, 0) ensures missing keys default to 0
        
        # Step 3: Create a frequency bucket list to group numbers by their frequencies
        # `freq` is a list of empty lists, where the index represents the frequency
        # The size is len(nums) + 1 because the maximum frequency a number can have is len(nums)
        freq = [[] for _ in range(len(nums) + 1)]

        # Step 4: Populate the frequency buckets
        # For each number `n` and its frequency `f` in the counter dictionary,
        # append the number `n` to the corresponding bucket `freq[f]`
        for n, f in counter.items():
            freq[f].append(n)
        
        # Step 5: Initialize an empty list to store the result
        res = []

        # Step 6: Iterate over the frequency list in reverse order (from highest frequency to lowest)
        # This ensures that the most frequent elements are processed first
        for i in range(len(freq) - 1, -1, -1):  # Start from the end of `freq` and go backward
            for n in freq[i]:  # Iterate over all numbers in the current frequency bucket
                res.append(n)  # Add the number to the result list
                if len(res) == k:  # If we've found `k` most frequent elements, return the result
                    return res

#same solution less comments
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        #create empty dictionary
        counter = {}

        #create for loop for 
        for n in nums:
            counter[n] = 1 + counter.get(n, 0)
        
        freq = [[] for _ in range(len(nums) + 1)]

        for n, f in counter.items():
            freq[f].append(n)
        
        res = []

        for i in range(len(freq) - 1, -1, -1):
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res  
        