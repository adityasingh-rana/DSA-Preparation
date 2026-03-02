// Given an array of size 'n'. Answer q queries where you need to print the sum of values in given range of indices from l to r (both included).
// Note: The values of l and r in queries follow 1-based indexing.

//------------------- Revision Notes: ---------------------------
// Problem: Range Sum Query (1-Based Indexing)
// Given an array of size n, answer q queries.
// Each query asks for sum from index l to r (both inclusive).

// Difficulty: Easy → Core Prefix Sum Pattern
// Pattern: Prefix Sum (Range Query)

// Key Idea:
// Precompute prefix sum once.
// prefix[i] = sum of elements from 1 to i

// Core Formula:
// rangeSum(l, r) = prefix[r] - prefix[l - 1]

// Preprocessing Time: O(n)
// Per Query Time: O(1)
// Total Time: O(n + q)
// Space: O(n)

// Why n+1 array?
// To handle 1-based indexing easily.
// prefix[0] = 0 (base case)

// When to Use:
// - Multiple range sum queries
// - Static array (no updates)
// - Need fast query responses

// Common Mistakes:
// - Recomputing sum for each query (O(n*q))
// - Forgetting l-1 in formula
// - Indexing confusion (0-based vs 1-based)
// - Integer overflow (use long long if needed)

#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector<int> &nums){
  for(int i = 1; i < nums.size(); i++){
    nums[i] += nums[i-1];
  }
}

int main() {
  int n;
  cout << "Enter the Size of the Array: ";
  cin >> n;
  vector<int> arr(n+1,0);
  cout << "Enter the elements of the array: ";
  for(int i = 1; i <=n; i++){
    cin>> arr[i];
  }
  prefixSum(arr);
  int l,r;
  int q;
  cout << "Enter number of queries:";
  cin >> q;
  while (q--){
    cout << "Enter Lower index:";
    cin >>l;
    cout << "Enter upper index:";
    cin >>r;
    cout << "sum from index " << l << " to index " << r << " is: " << arr[r] - arr[l-1] << endl;
  }
  return 0;
}