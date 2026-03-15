class Solution:
    def findDisappearedNumbers(self, nums):
        n = len(nums)
        s = set(nums)          # nums de elements set ch paa dinde haan
        res = []

        for i in range(1, n+1):
            if i not in s:     # je number set ch nahi
                res.append(i)  # result ch add kar do

        return res
        