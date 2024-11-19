from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Create a dictionary to store values and their indices
        hash_map = {}
        
        # Loop through the list of numbers with indices
        for i, num in enumerate(nums):
            # Calculate the complement needed to reach the target
            complement = target - num
            
            # Check if the complement is already in the dictionary
            if complement in hash_map:
                # If it is, return the indices
                return [hash_map[complement], i]
            
            # Otherwise, store the current number with its index in the dictionary
            hash_map[num] = i

        # Since there's guaranteed to be a solution, no need for additional return