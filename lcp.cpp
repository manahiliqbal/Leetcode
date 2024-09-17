class Solution:
    def longestCommonPrefix(self, strs):
        longest_pre = []
 
        if strs and len(strs) > 0:
            strs = sorted(strs) 
            first, last = strs[0], strs[-1] 
            for i in range(len(first)):
                if len(last) > i and last[i] == first[i]:
                    longest_pre.append(last[i])
                else:
                    return "".join(longest_pre)
        return "".join(longest_pre)
