# ➕ Prefix Sum

## 📌 Idea

Precompute cumulative sums so that range queries can be answered efficiently without recalculating sums every time.

---

## 🧠 When to Use

- Range sum queries
- Subarray sum problems
- Repeated sum calculations
- Continuous segment problems

---

## ⚡ Common Problems

- Range sum query
- Subarray with given sum
- Count subarrays
- Equal sum partition

---

## 🧩 Template

```cpp
vector<int> prefix(n);
prefix[0] = arr[0];

for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}

// Range sum from index l to r
int sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
```
## ⏱ Complexity

- Preprocessing Time: O(n)
- Query Time: O(1)
- Space Complexity: O(n)

---

## ❗ Common Mistakes

- Off-by-one errors in index calculation
- Not handling the case when l = 0
- Incorrect prefix array initialization

---

## 🧠 Key Insight

> Precompute once and reuse — avoids repeated calculations

---

## 🚀 Recognition Tip

Use Prefix Sum when:
- You need range or subarray sum
- Multiple queries are asked on the same array
- You want to optimize repeated sum calculations

👉 If you see **range + subarray + repeated queries**, think **Prefix Sum**