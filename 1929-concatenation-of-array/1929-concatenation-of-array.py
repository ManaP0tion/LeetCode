class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        newArr = []
        for _ in range(2):
            for i in range(len(nums)):
                newArr.append(nums[i])
        return newArr