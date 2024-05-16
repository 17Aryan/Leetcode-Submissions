class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        seen={}
        l=0
        output=0
        for i in range(len(s)):
            if s[i] not in seen:
                output=max(output,i-l+1)
            else:
                if seen[s[i]]<l:
                    output=max(output,i-l+1)
                else:
                    l=seen[s[i]]+1
            seen[s[i]]=i
        return output
        