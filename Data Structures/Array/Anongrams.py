"""
anagrams
Write a function, anagrams, that takes in two strings as arguments.
The function should return a boolean indicating whether or not the strings are anagrams.
Anagrams are strings that contain the same characters, but in any order.
"""

#create  a  dictionary with key-value pair 
#key = character
#value = amount of times you see the character
#create  a second list and compare to first

def anagrams(s1, s2):
    return char_count(s1) == char_count(s2)

def char_count(s):
    count  = {}

    for char in s:
        if char not in count:
            count[char] = 1
        else:
            count[char] += 1
    return count


print(anagrams('cats', 'tocs')) # -> False

print(anagrams('monkeyswrite', 'newyorktimes')#True
)



