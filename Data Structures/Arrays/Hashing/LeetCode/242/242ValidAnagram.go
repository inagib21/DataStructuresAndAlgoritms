package main

// Function to determine if two strings are anagrams
func isAnagram(s string, t string) bool {
	// If the lengths of the two strings are not the same, they cannot be anagrams
	if len(s) != len(t) {
		return false
	}

	// Create a map to count occurrences of characters
	// The map key is a byte (character), and the value is an integer count
	set := map[byte]int{}

	// Get the length of the strings
	length := len(s)

	// Iterate through both strings simultaneously
	for i := 0; i < length; i++ {
		set[s[i]]++ // Increment the count for the character in string `s`
		set[t[i]]-- // Decrement the count for the character in string `t`
	}

	// After the loop, check if all counts in the map are zero
	for _, v := range set {
		if v != 0 { // If any count is non-zero, `s` and `t` are not anagrams
			return false
		}
	}

	// If all counts are zero, `s` and `t` are anagrams
	return true
}

// Example usage:
// Uncomment the following code to test the function:
// func main() {
//     s := "anagram"
//     t := "nagaram"
//     result := isAnagram(s, t)
//     fmt.Println(result) // Output: true (since "anagram" and "nagaram" are anagrams)
// }
