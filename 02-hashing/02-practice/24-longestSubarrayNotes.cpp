/*
---------------------------------------------------------
Longest Subarray With Sum = 0
---------------------------------------------------------

Concept:
Prefix Sum + HashMap (unordered_map)

---------------------------------------------------------
Core Idea
---------------------------------------------------------

If the same prefix sum appears at two different indices,
then the elements between them have sum = 0.

Reason:
prefixSum[j] - prefixSum[i] = 0
=> prefixSum[j] = prefixSum[i]

So the subarray (i+1 ... j) has sum = 0.

---------------------------------------------------------
Algorithm
---------------------------------------------------------

1. Maintain a variable prefixSum.

2. Use a hashmap:
   prefixSum -> first index where it appeared.

3. Traverse the array.

4. Add current element to prefixSum.

5. If prefixSum == 0
      subarray from index 0 to i has sum 0
      length = i + 1

6. If prefixSum already exists in hashmap
      length = i - firstIndex

7. Update maximum length.

8. If prefixSum appears first time
      store its index in hashmap.

---------------------------------------------------------
Important Rule
---------------------------------------------------------

Always store the FIRST occurrence of prefixSum
to get the longest subarray.

---------------------------------------------------------
Example
---------------------------------------------------------

Array:
[15, -2, 2, -8, 1, 7, 10, 23]

Zero sum subarray:
[-2, 2, -8, 1, 7]

Length = 5

---------------------------------------------------------
Time Complexity
---------------------------------------------------------
O(N)

---------------------------------------------------------
Space Complexity
---------------------------------------------------------
O(N)

---------------------------------------------------------
Pattern
---------------------------------------------------------

This prefix sum + hashmap pattern is used in:

1. Longest subarray with sum K
2. Count subarrays with sum K
3. Subarray divisible by K
4. Equal 0s and 1s in array
5. Longest subarray with equal 0 and 1

Very common in product-based company interviews.
---------------------------------------------------------
*/