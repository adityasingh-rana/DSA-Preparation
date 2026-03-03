// Given a vector array sorted in increasing order. Return an array of square of each number sorted in increasing order. Where size of vector 1 < size < 101.

/*
REVISION NOTE:
Earlier mistake: Tried to square first and then sort.
Forgot the core observation about absolute values.

Correction:
Always check both ends when:
- Array is sorted
- Negative numbers are involved
- Output must remain sorted

Reminder:
Think in terms of absolute values, not actual values.

PATTERN TRIGGER:
"Largest absolute value lies at either end."
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void squareOfArray(vector<int> &nums){
  int n = nums.size();
  int i = 0;
  int j = n -1;
  int k = n -1;
  vector<int> ans(n,0);
  while (i<=j)
  {
    if (abs(nums[j]) >= abs(nums[i])){
      ans[k--] = nums[j] * nums[j];
      j--;
    } else {
      ans[k--] = nums[i] * nums[i];
      i++;
    }
  }
   for (int ele: ans){
    cout << ele << " ";
  }
}

int main (){
  vector<int> arr = {-2,-1,0,1,2,3,4,5};
  squareOfArray(arr);
  return 0;
}