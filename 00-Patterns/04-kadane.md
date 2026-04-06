# 📈 Kadane's Algorithm

## 📌 Idea

Find the maximum sum of a contiguous subarray in linear time by keeping track of the current sum and resetting it when it becomes negative.

---

## 🧠 When to Use

- Maximum subarray sum problems
- Continuous segment optimization
- Problems involving positive and negative numbers
- When brute force gives O(n²) and needs optimization

---

## ⚡ Common Problems

- Maximum subarray sum
- Maximum profit (variation)
- Largest sum contiguous subarray
- Subarray optimization problems

---

## 🧩 Template

```cpp
int maxSum = arr[0];
int currentSum = 0;

for (int i = 0; i < n; i++) {
    currentSum += arr[i];

    if (currentSum > maxSum) {
        maxSum = currentSum;
    }

    if (currentSum < 0) {
        currentSum = 0;
    }
}
```

## ⏱ Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## ❗ Common Mistakes

- Not handling all negative array case
- Resetting sum incorrectly
- Forgetting to update maximum sum

---

## 🧠 Key Insight

> If the current sum becomes negative, discard it and start fresh

---

## 🚀 Recognition Tip

Use Kadane’s Algorithm when:
- Problem asks for maximum subarray sum
- Continuous segment optimization is needed
- Both positive and negative numbers are present

👉 If you see **maximum + subarray + sum**, think **Kadane’s Algorithm**

---