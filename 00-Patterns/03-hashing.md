# 🗂️ Hashing

## 📌 Idea

Use hash-based data structures to store and retrieve data efficiently in constant time (on average).

---

## 🧠 When to Use

- Frequency counting
- Fast lookup / existence check
- Complement-based problems (e.g., Two Sum)
- Removing duplicates
- Tracking visited elements

---

## ⚡ Common Problems

- Two Sum
- Frequency of elements
- Longest consecutive sequence
- Subarray sum equals K
- First non-repeating element

---

## 🧩 Template

```cpp
unordered_map<int, int> mp;

// Frequency count
for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
}

// Lookup
if (mp.find(x) != mp.end()) {
    // element exists
}
```

## ⏱ Complexity

- Average Time Complexity: O(1)
- Worst Case Time Complexity: O(n)
- Space Complexity: O(n)

---

## ❗ Common Mistakes

- Using `map` instead of `unordered_map` (slower due to O(log n))
- Not checking if key exists before accessing
- Overusing hashing when a simpler approach works

---

## 🧠 Key Insight

> Hashing converts search and lookup operations into constant time on average

---

## 🚀 Recognition Tip

Use Hashing when:
- You need fast lookup or existence check
- Frequency counting is required
- Solving complement-based problems (like Two Sum)

👉 If you see **lookup + frequency + complement**, think **Hashing**

---