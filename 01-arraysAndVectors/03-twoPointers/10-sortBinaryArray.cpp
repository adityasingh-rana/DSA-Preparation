// Problem: Sort an array consisting of only 0s and 1s.

// Difficulty: Easy
// Pattern: Two Pointers (Partitioning)

// Key Idea:
// - Place all 0s on the left.
// - Place all 1s on the right.
// - Use two pointers (i from start, j from end).
// - If arr[i] is 0 → move i forward.
// - If arr[i] is 1 and arr[j] is 0 → swap.
// - If arr[j] is 1 → move j backward.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> arr = {1,0,0,1,1,1};
  int n = arr.size();
  int i=0, j = n - 1;
  while (i<j)
  {
    if(arr[i] == 0) i++;
    else if(arr[j]==1) j--;
    else {
      swap(arr[i],arr[j]);
      j--;
      i++;
    }
  }
  for (int ele: arr){
    cout << ele << " ";
  }
  return 0;
}