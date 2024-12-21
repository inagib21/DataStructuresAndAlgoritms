def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        print(f"Pass {i + 1}:")
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swap elements
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
            # Print the list after each comparison and potential swap
            print(f"  After comparing {arr[j]} and {arr[j+1]}: {arr}")
        print(f"  Result after Pass {i + 1}: {arr}")
    return arr

# Example list
example_list = ['a', 'z', 'g', 'b', 'e']
print("Initial List:", example_list)
sorted_list = bubble_sort(example_list)
print("Sorted List:", sorted_list)