    vector<int> productExceptSelf(vector<int>& nums) {
        int numsSize = nums.size();
        vector<int> result;
        result.resize(numsSize);
        result[0] = 1;
        // Iterate through array multiplying values to the left of the current element
        for (int i = 1; i < numsSize; i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }
        int right = 1;
        // Iterate backwards through array multiplying all values to the right of current element
        for (int i = numsSize - 1; i >= 0; i--) {
            result[i] *= right;
            right *= nums[i];
        }
        return result;
    }