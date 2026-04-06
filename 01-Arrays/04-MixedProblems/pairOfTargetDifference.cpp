// Given an array sorted in increasing order of size n and integer x. Find if there exists a pair in the array whose absolute difference is exactly x.

/*
==========================================================
PROBLEM:
Given a sorted array (in increasing order) and integer x,
check if there exists a pair whose absolute difference is x.
==========================================================

PATTERN:
Two Pointers (because array is sorted)

WHY TWO POINTERS?
- Sorted array allows controlled movement.
- Increasing right pointer increases difference.
- Increasing left pointer decreases difference.

ALGORITHM:
1. Initialize:
   i = 0
   j = 1

2. While (i < n && j < n):
   - If i == j → j++
   - diff = nums[j] - nums[i]

   - If diff == x → return true
   - If diff < x → j++   (need bigger difference)
   - If diff > x → i++   (need smaller difference)

3. If loop ends → return false

TIME COMPLEXITY:
O(n)

SPACE COMPLEXITY:
O(1)

IMPORTANT POINTS:
- Works only for sorted arrays
- No need for abs() since nums[j] >= nums[i]
- Always maintain j > i
- For x = 0 → need duplicate elements
==========================================================
*/

#include <iostream>
#include <vector>
using namespace std;

string isDifferencePairPossible(vector<int> &nums,int x){
  int i = 0;
  int j = 1;
  int n = nums.size();
  while (i<n && j < n)
  {
    int difference = abs( nums[i] - nums[j]);
    if (difference == x) return "Yes";
    else if (difference < x) j++;
    else {i++;}
  }

  return "No";
}

int main (){
  vector<int> arr = {1};
  int x;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << isDifferencePairPossible(arr,x);
  return 0;
}