// ramnitcode27
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxSum=INT_MIN;
        int currentSum=0;
        for(int i=0;i<n;i++){
            currentSum+=nums[i];
            if(currentSum<0){
                currentSum=0;
            }
            maxSum=max(currentSum,maxSum);
        }
        if(maxSum==0){
		    sort(nums.begin(),nums.end());
		    maxSum=nums[n-1];
	    }
        return maxSum;
    }
};