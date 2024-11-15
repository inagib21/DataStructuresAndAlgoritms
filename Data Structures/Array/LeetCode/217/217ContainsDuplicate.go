package main

func containsDuplicate(nums []int) bool {
	seen := make(map[int]bool)
	for _, num := range nums {
		if seen[num] {
			return true // Duplicate found
		}
		seen[num] = true // Mark number as seen
	}
	return false // No duplicates
}

// Example usage:
// func main() {
//     nums := []int{1, 2, 3, 1}
//     result := containsDuplicate(nums)
//     fmt.Println(result) // Output: true
// }
