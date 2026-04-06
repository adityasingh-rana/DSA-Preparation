/*
===========================================
Anagram Check using Hashing (C++)
===========================================

Definition:
Two strings are anagrams if they contain the same characters
with the same frequency but possibly in different order.

Example:
"listen"  -> "silent"
"ABCD"    -> "ADBC"

-------------------------------------------
Approach: Hashing (unordered_map)
-------------------------------------------

Steps:
1. If lengths of both strings are different -> return false.
2. Create unordered_map<char,int> to store frequency.
3. Traverse first string -> increase frequency.
4. Traverse second string -> decrease frequency.
5. If any frequency becomes negative -> not an anagram.
6. If all frequencies become zero -> strings are anagrams.

-------------------------------------------
Time Complexity
-------------------------------------------
O(n)

n = length of string

-------------------------------------------
Space Complexity
-------------------------------------------
O(k)

k = number of unique characters

-------------------------------------------
Better Optimization (for lowercase letters)
-------------------------------------------

Instead of unordered_map, use array of size 26.

int freq[26] = {0};

Advantages:
- Faster than hashmap
- Constant space O(1)

-------------------------------------------
Interview Variations
-------------------------------------------

1. Valid Anagram (LeetCode 242)
2. Group Anagrams
3. Find all anagrams in a string
4. Check permutation of substring

-------------------------------------------
Important Edge Cases
-------------------------------------------

1. Different lengths
   "abc" vs "abcc" -> false

2. Same characters different order
   "race" vs "care" -> true

3. Case sensitivity
   "Listen" vs "Silent"

-------------------------------------------
Key Idea
-------------------------------------------

Anagrams have identical character frequencies.

-------------------------------------------
Common Mistakes
-------------------------------------------

1. Forgetting length check
2. Using sorting when O(n) hashing is possible
3. Using map instead of array when characters are limited

-------------------------------------------
Best Optimized Logic
-------------------------------------------

1. Check size
2. Use frequency array
3. Increment for str1
4. Decrement for str2
5. If any count < 0 -> return false

-------------------------------------------
DSA Topic
-------------------------------------------

Hashing / Frequency Counting
*/