// check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of array is equal to sufix sum of rest of the array.

// Problem: Partition array into two equal-sum parts.
// Difficulty: Medium
// Key Idea: suffixSum = totalSum - prefixSum
// Core Condition: 2 * prefixSum == totalSum
// Brute Force:  Time O(n^2), Space O(1)
// Optimized:    Time O(n),   Space O(1)

#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach. // time: O(n^2), space: O(1)

// bool isPartitionPossible(vector<int> &nums)
// {
//   int n = nums.size();
//   int end = 0;
//   int st = end + 1;
//   while (st < n)
//   {
//     int partition1 = 0;
//     int partition2 = 0;
//     for (int i = 0; i <= end; i++)
//     {
//       partition1 += nums[i];
//     }
//     for (int i = st; i < nums.size(); i++)
//     {
//       partition2 += nums[i];
//     }
//     end++;
//     st++;
//     if(partition1 == partition2) return true;
//   }
//   return false;
// }

// Optimization. // Time: O(n), space: O(1)

int totalSum(vector<int> &arr){
  int sum = 0;
  for (int ele: arr){
    sum += ele;
  }
  return sum;
}

bool isPartitionPossible(vector<int> &nums)
{
  int total = totalSum(nums);
  int prefixSum = 0;
  for( int i = 0; i < nums.size() -1; i++){
    prefixSum += nums[i];
    int suffixSum = total - prefixSum;
    if (prefixSum == suffixSum) return true;
  }
  return false;
}

int main()
{
  vector<int> arr = {6,2,4, 3,1};
  cout<< boolalpha << isPartitionPossible(arr);
  return 0;
}