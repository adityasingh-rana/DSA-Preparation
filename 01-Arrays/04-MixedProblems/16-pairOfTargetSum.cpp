// Given a vector arr sorted in increasing order of size n and an integer x. Find the if there exists a pair in the array whose sum is exactly x.

// 🔹 Problem: Pair Sum in Sorted Array (Exists or Not)
// 🔹 Difficulty: Easy
// 🔹 Pattern: Two Pointer
// 🔹 Tags: array, two-pointer, sorted-array, pair-sum
// 🔹 Type: Decision Problem (Yes/No)

// 🔹 Core Idea:
// Since array is sorted in increasing order,
// use two pointers:
// left = 0, right = n-1.
// Compare sum = nums[left] + nums[right].
// If sum == x → return "Yes".
// If sum < x → move left forward (increase sum).
// If sum > x → move right backward (decrease sum).

// 🔹 Why It Works:
// In sorted array,
// moving left increases sum,
// moving right decreases sum.
// So we can eliminate half search space each step.

// 🔹 Time Complexity: O(n)
// Each element is visited at most once.

// 🔹 Space Complexity: O(1)

// 🔹 Important Variations:
// 1. Count number of pairs → don’t return early.
// 2. Return indices → store positions.
// 3. Unsorted array → use Hashing (O(n) time, O(n) space).

#include <iostream>
#include <vector>
using namespace std;

// Brute Force:

// string isPairPossible(vector<int> &nums,int x){
//   for(int i = 0; i < nums.size() -1; i++){
//     for(int j = i +1; j <nums.size(); j++){
//       if(nums[i] + nums[j] == x){
//         return "Yes";
//       }
//     }
//   }
//   return "No";
// }

// Optimal:

string isPairPossible(vector<int> &nums,int x){
  int i =0;
  int j = nums.size() - 1;
  while (i<j)
  {
    int sum = nums[i] + nums[j];
    if(sum == x) return "Yes";
    else if (sum < x) i++;
    else {
      j--;
    }
  }
  return "No";
}

int main (){
  vector<int> arr = {1, 2, 2, 3, 4};

  int x;
  cout << "Enter the TargetSum:";
  cin >> x;

  cout << isPairPossible(arr,x);
  return 0;
}