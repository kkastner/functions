    void rotate(vector<int>& nums, int k) {
        // Make sure k is within the range of the vector
        int numsSize = nums.size();
        k %= numsSize;
        if (k == 0) return;
        int pos = numsSize-k;
        int tempA = nums[pos];
        int prevPos = pos; // Used to make sure that all elements are iterated over
        for (int i=0;i<numsSize;i++) {
            pos = (pos+k)%numsSize;
            int tempB = nums[pos];
            nums[pos] = tempA;
            tempA = tempB;
            if (pos == prevPos) { // Is we encountered this element before, then skip to the next one
                tempA = nums[++pos];
                prevPos = pos;
            }
        }
    }