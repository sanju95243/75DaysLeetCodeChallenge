class Solution:
    def productExceptSelf(self, nums):
        n = len(nums)
        answer = [1] * n   # result array

        # prefix product (left side)
        prefix = 1
        for i in range(n):
            answer[i] = prefix
            prefix *= nums[i]

        # suffix product (right side)
        suffix = 1
        for i in range(n-1, -1, -1):
            answer[i] *= suffix
            suffix *= nums[i]

        return answer
        