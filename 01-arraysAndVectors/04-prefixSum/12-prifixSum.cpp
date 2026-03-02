// Given an intergers array, Return the prefix sum in the same array without creating a new array.

// Easy.

#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> &nums){
  for(int i = 1; i < nums.size(); i++){
    nums[i] += nums[i - 1];
  }
}

int main () {
  vector<int> arr = {};
  if ( arr.size() == 0) {
    cout << "array is empty.";
    return 0;
  }
  prefixSum(arr);//logic
  for(int ele: arr){
    cout << ele << " ";
  }
  return 0;
}