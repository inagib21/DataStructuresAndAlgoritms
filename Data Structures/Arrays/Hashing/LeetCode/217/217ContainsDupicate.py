class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # Define a class called Solution.
        # Inside this class, define a method (a function that belongs to a class) named `containsDuplicate`.
        # The method takes a parameter `nums`, which is a list of integers, and returns a boolean (True or False).
        n = len(nums)
        # Get the total number of elements in the list `nums` and store it in the variable `n`.
        # For example, if `nums = [1, 2, 3, 1]`, then `n = 4`.
        for i in range(n - 1):
            # Start an outer loop where `i` iterates from 0 to `n-2`.
            # This loop helps us fix one element of the list at index `i` in each iteration.
            for j in range(i + 1, n):
                # Start an inner loop where `j` iterates from `i+1` to `n-1`.
                # This loop compares the fixed element at index `i` with every subsequent element in the list.
                if nums[i] == nums[j]:
                    # Check if the element at index `i` is equal to the element at index `j`.
                    # If they are equal, it means there is a duplicate.
                    return True
                    # If a duplicate is found, return `True` immediately and exit the function.
        return False
        # If the loops finish without finding any duplicates, return `False` to indicate all elements are distinct.
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        
        n = len(nums)
        for i in range(n - 1):
            for j in range(i + 1, n):
                if nums[i] == nums[j]:
                    return True
        return False
        
