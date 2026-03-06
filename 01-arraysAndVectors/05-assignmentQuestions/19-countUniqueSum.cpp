// Given an array sorted in increasing order and integer x. Find the number of total unique pairs that exists in the array whose sum is exactly x.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int uniquePairs(vector<int> &nums, int x){
  int i = 0;
  int j = nums.size() - 1;
  int count = 0;
  while (i < j)
  {
    int sum = nums[i] + nums[j];
    if( sum == x) {
      count ++;
      i++;
      j--;
    }
    else if (sum < x) i++;
    else j--;
  }
  return count;
}

int main (){
  vector<int> arr = {-9,-9,-1,0,1,2,3,4,5,6,7,8};
  int x;
  cout << "Enter x: ";
  cin >> x;
  cout << uniquePairs(arr,x);
  return 0;
}