// given an array sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> sortedArrayOfSquare(vector<int> &nums){
  int n = nums.size();
  int st = 0;
  int end = n - 1;
  vector<int> ans(n);
  int pos = n-1;
  while(st <= end){
    if (abs(nums[st]) > abs(nums[end])) {
      ans[pos--] = nums[st] * nums[st];
      st++;
    } else{
      ans[pos--] = nums[end] * nums[end];
      end--;
    }
  };
  return ans;
}

int main(){
  vector<int> arr = {-7,-3,2,3,11};
  int n = arr.size();
  arr = sortedArrayOfSquare(arr);//logic
  for(int ele: arr){
    cout << ele << " ";
  }
  return 0;
}