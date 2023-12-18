class Solution {
    public int maxProductDifference(int[] nums) {
        Arrays.sort(nums);
        int size = nums.length;
        int high = nums[nums.length-1] * nums[nums.length-2];
        int low = nums[0] * nums[1];
        int sol = high - low;
        return sol;
    }
}