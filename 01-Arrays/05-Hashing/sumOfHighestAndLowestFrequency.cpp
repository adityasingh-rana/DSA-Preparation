// Given an array of n integers, find the sum of the frequencies of the highest occurring number and lowest occurring number.

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int lowFreq = INT_MAX;
        int highFreq = INT_MIN;
        unordered_map <int,int> freqMap;
        for(int i = 0; i < nums.size(); i++){
            freqMap[nums[i]]++;
        }
        for (auto ele: freqMap){
            if(ele.second < lowFreq) lowFreq = ele.second;
            if(ele.second > highFreq) highFreq = ele.second;
        }
        return highFreq + lowFreq;
    }
};
