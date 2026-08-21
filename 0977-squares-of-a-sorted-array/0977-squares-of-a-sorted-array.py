class Solution(object):
    def sortedSquares(self, nums):
        left = 0
        right = len(nums)-1
        #new array for sort
        ans = [0] * len(nums)

        for i in range(len(nums) -1, -1, -1):
             #square
            left_square= nums[left]**2
            right_square = nums[right]**2
            if left_square > right_square:
                ans[i] = left_square
                left+=1
            else:
                ans[i] = right_square
                right-=1
        return ans

            
        