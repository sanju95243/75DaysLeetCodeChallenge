class Solution:
    def isPalindrome(self, s):
        # convert to lowercase and keep only letters and numbers
        cleaned = ""
        for ch in s:
            if ch.isalnum():      # check if alphanumeric
                cleaned += ch.lower()

        # check palindrome
        return cleaned == cleaned[::-1]
        