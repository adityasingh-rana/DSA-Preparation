# 🔁 Two Pointers

## 📌 Idea

Use two indices (pointers) to traverse data efficiently instead of nested loops.

---

## 🧠 When to Use

- Array is sorted
- Finding pairs / triplets
- Removing duplicates
- Partitioning problems
- Reversing or comparing elements

---

## ⚡ Common Problems

- Two Sum (sorted)
- Pair with target sum
- Remove duplicates
- Container with most water
- 3Sum

---

## 🧩 Template

```cpp
int left = 0, right = n - 1;

while (left < right) {
    if (condition) {
        // process
        left++;
        right--;
    } else if (condition) {
        left++;
    } else {
        right--;
    }
}
```

## ⏱ Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## ❗ Common Mistakes

- Applying two pointers on an unsorted array
- Moving the wrong pointer based on condition
- Forgetting to update pointers → leads to infinite loop

---

## 🧠 Key Insight

> Two pointers help optimize brute force solutions from O(n²) to O(n)

---

## 🚀 Recognition Tip

Use Two Pointers when:
- You need to find pairs or triplets
- The array is sorted (or can be sorted)
- You are comparing elements from both ends

👉 If you see **pair + sorted + sum**, think **Two Pointers**