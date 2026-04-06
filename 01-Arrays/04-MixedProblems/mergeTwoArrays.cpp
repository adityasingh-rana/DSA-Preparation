// Given two arrays of size m and n sorted in increasing order. Merge the arrays into single sorted array of size m + n.

// Important Logic.
// 🔹 Problem: Merge Two Sorted Arrays
// 🔹 Difficulty: Easy
// 🔹 Personal Difficulty: Medium (first attempt)
// 🔹 Pattern: Two Pointer
// 🔹 Tags: array, two-pointer, sorting, merge, merge-sort-foundation
// 🔹 Source: Basic DSA Practice

// 🔹 Problem Statement:
// Given two sorted arrays of size m and n,
// merge them into a single sorted array of size (m + n).

// 🔹 Core Idea:
// Since both arrays are already sorted,
// compare current elements from both arrays.
// Insert the smaller element into the merged array
// and move that pointer forward.
// After one array finishes, copy remaining elements
// from the other array.

// 🔹 Time Complexity: O(m + n)
// 🔹 Space Complexity: O(m + n)

// 🔹 Key Learning:
// When arrays are sorted → think Two Pointer.
// This logic is the foundation of Merge Sort.

// solution:
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr1 = {1, 3, 5, 7, 8};
  int m = arr1.size();
  vector<int> arr2 = {2, 4, 6, 9};
  int n = arr2.size();
  vector<int> mergedArr;
  int a = 0;
  int b = 0;
  while (a < m && b < n)
  {
    if (arr1[a] < arr2[b])
      mergedArr.push_back(arr1[a++]);
    else
    {
      mergedArr.push_back(arr2[b++]);
    }
  }

  while (a < m)
  {
    mergedArr.push_back(arr1[a++]);
  }

  while (b < n)
  {
    mergedArr.push_back(arr2[b++]);
  }

  for (int ele : mergedArr)
  {
    cout << ele << " ";
  }
  return 0;
}

