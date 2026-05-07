# ramnitcode27
# Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
# A subarray is a contiguous part of an array.

from ast import List

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n,maxSum,currSum=len(nums),-(1e9),0
        for i in range(0,n):
            currSum+=nums[i]
            if currSum<0:
                currSum=0
            maxSum=max(currSum,maxSum)
        if maxSum==0:
            nums.sort()
            maxSum=nums[n-1]
        return maxSum