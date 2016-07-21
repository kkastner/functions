    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num_sum = 0
        for i in range(len(nums)):
            num_sum += nums[i] - i
        return len(nums) - num_sum