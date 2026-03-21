class Solution:
    def moveZeroes(self, nums):
        i = 0  # position to place next non-zero

        # move all non-zero elements forward
        for j in range(len(nums)):
            if nums[j] != 0:
                nums[i], nums[j] = nums[j], nums[i]
                i += 1
        