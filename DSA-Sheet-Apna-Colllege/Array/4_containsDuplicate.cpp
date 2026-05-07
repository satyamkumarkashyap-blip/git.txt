// ramnitcode27
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i-1]==nums[i])
        //         return true;
        // }
        // return false;
        
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            if (mp.find(nums[i]) == mp.end())
                mp[nums[i]] = i;
            
            else
                return true;
        }
        return false;
        
    }
};