// Given an array of length N, find the longest subarray with the sum equal to 0.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main (){
  vector<int> arr = {0,0,0};
  int n = arr.size();
  unordered_map<int,int> prefixSumArr;
  int key = 0;
  int ans = 0;
  for(int i = 0; i < n; i++){
    key += arr[i];
    if(key == 0) ans = i + 1;
    if(prefixSumArr.find(key) == prefixSumArr.end()){
      prefixSumArr[key] = i;
    }
    else {
      ans = max(ans,i - prefixSumArr[key]);
    }
  }
  cout << ans;
  return 0;
}