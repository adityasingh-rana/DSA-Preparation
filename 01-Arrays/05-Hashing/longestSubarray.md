# 📌 Problem: Longest Subarray With Sum = 0

---

## 📌 Concept

**Prefix Sum + HashMap (unordered_map)**

---

## 🧠 Core Idea

If the same prefix sum appears at two different indices,
then the elements between them have sum = 0.

### Reason:
```
prefixSum[j] - prefixSum[i] = 0
⇒ prefixSum[j] = prefixSum[i]
```

👉 So the subarray (i+1 ... j) has sum = 0.

---

## 🚀 Algorithm

1. Initialize a variable `prefixSum = 0`

2. Use a hashmap:
   prefixSum → first index where it appeared

3. Traverse the array

4. Add current element to `prefixSum`

5. If `prefixSum == 0`
   → Subarray from index 0 to i has sum 0
   → Length = i + 1

6. If `prefixSum` already exists in hashmap
   → Length = i - firstIndex

7. Update maximum length

8. If `prefixSum` appears first time
   → Store its index in hashmap

---

## ⚠️ Important Rule

Always store the **FIRST occurrence** of prefixSum
to get the **longest subarray**

---

## 📊 Example

Input:
[15, -2, 2, -8, 1, 7, 10, 23]

Zero Sum Subarray:
[-2, 2, -8, 1, 7]

Length:
5

---

## ⏱ Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

---

## 🧠 Pattern

This Prefix Sum + HashMap pattern is used in:

- Longest subarray with sum K
- Count subarrays with sum K
- Subarray divisible by K
- Equal 0s and 1s in array
- Longest subarray with equal 0 and 1

---

## 🚀 Recognition Tip

If you see:
- Subarray
- Sum = 0 or K
- Need longest or count

👉 Think **Prefix Sum + HashMap**