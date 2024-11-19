package main

func twoSum(nums []int, target int) []int {
	// Create a map to store numbers and their indices
	lookup := make(map[int]int)

	// Iterate through the array
	for i, num := range nums {
		// Calculate the complement needed to reach the target
		complement := target - num

		// Check if the complement exists in the map
		if index, found := lookup[complement]; found {
			// If found, return the indices of the complement and the current number
			return []int{index, i}
		}

		// Store the current number and its index in the map
		lookup[num] = i
	}

	// Return an empty slice if no solution is found (problem guarantees a solution)
	return []int{}
}
