class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        ans = []
        start = 0
        end = len(numbers) - 1
        
        while start <= end:
            if numbers[start] + numbers[end] == target:
                ans.append(start+1)
                ans.append(end+1)
                return ans
            
            if numbers[start] + numbers[end] < target:
                start += 1
            
            if numbers[start] + numbers[end] > target:
                end -= 1

            

