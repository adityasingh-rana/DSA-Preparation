class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        for (int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        int maxFreqEle = -1;
        int maxFreq = -1;
        for(auto ele: hash){
            if(ele.second > maxFreq) {
                maxFreq = ele.second;
                maxFreqEle = ele.first;
            } else if(ele.second == maxFreq){
                if(ele.first < maxFreqEle) maxFreqEle = ele.first;
            }
        }
        return maxFreqEle;
    }
};