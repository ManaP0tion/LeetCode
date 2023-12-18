#include <algorithm>
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int high = nums[nums.size()-1] * nums[nums.size()-2];
        int low = nums[0]*nums[1];
        int ans = high - low;
        return ans;
    }
};