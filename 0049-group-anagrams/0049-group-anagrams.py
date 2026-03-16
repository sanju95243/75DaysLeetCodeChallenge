class Solution:
    def groupAnagrams(self, strs):
        groups = {}   # dictionary to store anagram groups

        for word in strs:
            # sort the word to create a common key for anagrams
            key = "".join(sorted(word))

            # if key not in dictionary, create new list
            if key not in groups:
                groups[key] = []

            # add the word to its anagram group
            groups[key].append(word)

        # return all grouped anagrams
        return list(groups.values())
        