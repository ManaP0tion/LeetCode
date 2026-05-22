class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if not nums:
            return 0

        current_max = nums[0]
        global_max = nums[0]

        for n in nums[1:]:
            current_max = max(n, current_max + n)

            if current_max > global_max:
                global_max = current_max

        return global_max