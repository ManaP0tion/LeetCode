class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ""
        idx = 0
        longer = max(len(word1), len(word2)) #둘중 긴것을 선택
        for i in range(0, longer):         
            if idx+1 <= len(word1): #1번 단어 
                ans+=word1[idx]
            if idx+1 <= len(word2): 
                ans+=word2[idx]
            idx += 1        # 인덱스 증가시킴
        return ans
        