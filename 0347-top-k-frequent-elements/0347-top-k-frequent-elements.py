class Solution:
    def topKFrequent(self, nums, k):
        freq = {}   # dictionary to count frequency

        # count frequency of each number
        for num in nums:
            freq[num] = freq.get(num, 0) + 1

        # sort numbers based on frequency (highest first)
        sorted_nums = sorted(freq, key=freq.get, reverse=True)

        # return top k frequent elements
        return sorted_nums[:k]