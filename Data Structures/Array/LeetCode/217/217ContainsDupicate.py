class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        seen = set()  # Use a set to track seen elements
        for num in nums:
            if num in seen:  # If the number is already in the set, we have a duplicate
                return True
            seen.add(num)  # Otherwise, add the number to the set
        return False  # If we finish the loop without finding duplicates, return False