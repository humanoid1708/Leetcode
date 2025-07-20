#https://leetcode.com/problems/palindrome-number/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        inp = str(x)
        out = ""
        l1 = []
        for i in range(len(inp)):
            l1.append(inp[i])
        for j in range(len(l1)):
            out += l1.pop()
        return inp == out