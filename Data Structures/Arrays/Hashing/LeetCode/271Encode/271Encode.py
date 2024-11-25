"""Intuition
After understanding this problem, I wanted to come up with a generic solution that could handle any character. Hence, I tried thinking about ways I can get the original string back without tampering it. I decided to use the lengths and catch strings of given lengths while decoding.

Approach
I start by calculating the total number of strings to be encoded. Then, I calculate the lengths of each strings and store it in a list. I then join the first value and this list with a delimiter. I combine all the strings and prepend the length string to it.
ex: ["a", "bb", "ccc"]
length: 3
lengths: [1, 2, 3]
encoded string: 3,1,2,3,abbccc
Now, while decoding, I separate the string with the delimiter and then reverse engineer the encode function. This approach is similar to a public-secret key approach of encoding.

Complexity
Time complexity:
O(n), n = length of s

Space complexity:
O(n), n = length of s

"""
class Codec:
    def encode(self, strs: List[str]) -> str:
        """Encodes a list of strings to a single string.
        """
        length = len(strs)
        lengths = [str(len(x)) for x in strs]
        return str(length) + "," + ','.join(lengths) + "," + "".join(strs)

    def decode(self, s: str) -> List[str]:
        """Decodes a single string to a list of strings.
        """
        separator = s.split(",")
        length = int(separator[0])
        lengths = []
        for i in range(1, length+1):
            lengths.append(int(separator[i]))
        ignoreIndex = len(','.join(separator[:length+1])) + 1
        jointString = s[ignoreIndex:]
        answer = []
        start, end = 0, 0
        for endIndex in lengths:
            start = end
            end = start+endIndex
            thisString = jointString[start:end]
            answer.append(thisString)
        return answer
# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(strs))