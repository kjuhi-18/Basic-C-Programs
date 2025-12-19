# 📘 BasicSorting (C Programs)

A **beginner‑friendly C repository** that demonstrates **basic sorting and searching algorithms** with clean code, simple explanations, and sample input/output.



---

## 📂 Folder Structure

```
Basic-C-Programs/
└── BasicSorting/
    ├── BinarySearch.c
    ├── bubblesort.c
    ├── selectionsort.c
    └── README.md
```

---

## 🚀 What You’ll Learn

- ✔️ How sorting algorithms work step‑by‑step
- ✔️ How binary search works on sorted arrays
- ✔️ Writing clean C code using loops and functions
- ✔️ Time complexity basics (in simple terms)

---

## 🧠 Programs Included

### 🔹 Bubble Sort (`bubblesort.c`)
**Idea:** Repeatedly swap adjacent elements if they are in the wrong order.

- Best for learning (not performance)
- Time Complexity:  
  - Best: `O(n)` (already sorted)  
  - Worst/Average: `O(n²)`

---

### 🔹 Selection Sort (`selectionsort.c`)
**Idea:** Repeatedly select the smallest element and place it at the correct position.

- Simple and predictable
- Time Complexity: `O(n²)` (always)

---

### 🔹 Binary Search (`BinarySearch.c`)
**Idea:** Divide the sorted array into halves to find the element faster.

⚠️ Works **only on sorted arrays**

- Time Complexity: `O(log n)`

---

## ▶️ How to Run the Programs

### 1️⃣ Compile

```bash
gcc bubblesort.c -o bubblesort
gcc selectionsort.c -o selectionsort
gcc BinarySearch.c -o binarysearch
```

### 2️⃣ Execute

```bash
./bubblesort
./selectionsort
./binarysearch
```

---

## 🧪 Sample Input / Output

**Input:**
```
Enter number of elements: 5
Enter elements: 5 1 4 2 8
```

**Output (Bubble Sort):**
```
Sorted array: 1 2 4 5 8
```

---

## 📊 Algorithm Comparison

| Algorithm        | Best Case | Average Case | Worst Case | Stable |
|------------------|-----------|--------------|------------|--------|
| Bubble Sort      | O(n)      | O(n²)        | O(n²)      | Yes    |
| Selection Sort   | O(n²)     | O(n²)        | O(n²)      | No     |
| Binary Search    | O(1)      | O(log n)     | O(log n)   | —      |

---

## 🌱 Beginner Tips

- ✨ Start with **Bubble Sort** to understand swapping
- ✨ Always **sort before binary search**
- ✨ Try dry‑running the code with pen & paper
- ✨ Modify the code to sort in descending order

---



## 🤝 Contributing

Beginners are welcome! Feel free to:
- Improve comments
- Add new sorting methods
- Optimize existing code

---

## ⭐ Support

If this repo helped you:

- 🌟 Star the repository
- 🍴 Fork it to practice
- 🧑‍💻 Share with friends

---

**Happy Coding in C! 💻✨**

