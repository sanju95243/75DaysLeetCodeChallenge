class Solution(object):
    def containsDuplicate(self, nums):
       hashmap = {}

       for i in range(len(nums)):
        if nums[i] in hashmap:
            return True
        hashmap[nums[i]] = True
            
       return False    

nums = [1,2,3,1]
obj = Solution()
print(obj.containsDuplicate(nums))
        