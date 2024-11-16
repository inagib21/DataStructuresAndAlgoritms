package main

// Function to check for duplicates in a slice of integers
func containsDuplicate(nums []int) bool {
	// Create a map to store whether a number has been seen before
	seen := make(map[int]bool)
	// Loop through each number in the slice
	for _, num := range nums {
		// Check if the number is already in the map (seen before)
		if seen[num] {
			// If it is, we have found a duplicate, return true
			return true
		}
		// If not, mark this number as seen by setting its value in the map to true
		seen[num] = true
	}
	// If we finish the loop without finding duplicates, return false
	return false
}

// Example usage:
// func main() {
//     nums := []int{1, 2, 3, 1}
//     result := containsDuplicate(nums)
//     fmt.Println(result) // Output: true
// }
