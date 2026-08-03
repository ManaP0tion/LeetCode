class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        set_n = set(nums)
        set_n = list(set_n)
        for element in set_n:
            if nums.count(element) == 1:
                return element
        