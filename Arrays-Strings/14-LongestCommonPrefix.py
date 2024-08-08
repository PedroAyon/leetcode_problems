class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ''
        prefix = strs[0]
        prefix_len = len(prefix)
        for s in strs:
            prefix_len = min(prefix_len, len(s))
            for i in range(0, prefix_len):
                if (s[i] != prefix[i]):
                    prefix_len = i
                    break
        return prefix[:prefix_len]
