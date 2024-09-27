def recursive_binary_search(list, target):
    # Base case: if the list is empty, the target is not found
    if len(list) == 0:
        return False
    else:
        # Calculate the midpoint of the list
        midpoint = (len(list)) // 2

        # If the midpoint element is the target, we've found it
        if list[midpoint] == target:
            return True
        else:
            # If the midpoint element is less than the target,
            # search the right half of the list
            if list[midpoint] < target:
                return recursive_binary_search(list[midpoint+1:], target)
            # If the midpoint element is greater than the target,
            # search the left half of the list
            else:
                return recursive_binary_search(list[:midpoint], target)

def verify(result):
    # Print whether the search was successful or not
    print("Target found:", result)

# Example usage:
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = recursive_binary_search(numbers, 12)
verify(result)  # This will print: Target found: False
#
result = recursive_binary_search(numbers, 6)
verify(result)  # This will print: Target found: True
