class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        ans = []
        start = 0
        end = len(numbers) - 1
        
        while start <= end:
            total = numbers[start] + numbers[end]
            if total == target:
                ans.append(start+1)
                ans.append(end+1)
                return ans
            
            elif total < target:
                start += 1
            
            else:
                end -= 1

            

