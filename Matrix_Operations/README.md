# 🧮 Matrix Operations (C Programs)

This folder contains **beginner-friendly C programs** that demonstrate **basic matrix operations** using 2D arrays.

> 🎯 Ideal for learning **matrices, nested loops, and array manipulation** in C.

---

## 📂 Folder Structure

```
Basic-C-Programs/
└── Matrix_Operations/
    ├── matrix_addition.c
    ├── matrix_subtraction.c
    ├── matrix_transpose.c
    └── README.md
```

---

## 🧠 What You’ll Learn

* ✔️ How to represent matrices using 2D arrays
* ✔️ How to use nested loops for matrix operations
* ✔️ Matrix addition and subtraction logic
* ✔️ How matrix transpose works

---

## 📄 Program Overview

### 🔹 `matrix_addition.c`

**Operation:** Matrix Addition

* Adds two matrices of the same order
* Each element is added position-wise

📌 Formula:

```
C[i][j] = A[i][j] + B[i][j]
```

**Concepts used:**

* 2D arrays
* Nested `for` loops
* User input/output

---

### 🔹 `matrix_subtraction.c`

**Operation:** Matrix Subtraction

* Subtracts one matrix from another of the same order
* Each element is subtracted position-wise

📌 Formula:

```
C[i][j] = A[i][j] - B[i][j]
```

**Concepts used:**

* 2D arrays
* Nested loops
* Arithmetic operations

---

### 🔹 `matrix_transpose.c`

**Operation:** Matrix Transpose

* Converts rows into columns and columns into rows
* Works for any rectangular matrix

📌 Logic:

```
Transpose[j][i] = Matrix[i][j]
```

**Concepts used:**

* 2D arrays
* Nested loops
* Index swapping

---

## ▶️ How to Compile and Run

### 1️⃣ Compile

```bash
gcc matrix_addition.c -o mat_add
gcc matrix_subtraction.c -o mat_sub
gcc matrix_transpose.c -o mat_trans
```

### 2️⃣ Execute

```bash
./mat_add
./mat_sub
./mat_trans
```

---

## 🧪 Sample Input / Output

**Input:**

```
Enter number of rows and columns: 2 2
Enter elements of Matrix A:
1 2
3 4
Enter elements of Matrix B:
5 6
7 8
```

**Output (Addition):**

```
Resultant Matrix:
6 8
10 12
```

---

## 📊 Comparison of Operations

| Operation   | Requires Same Order | Uses Nested Loops | Beginner Friendly |
| ----------- | ------------------- | ----------------- | ----------------- |
| Addition    | ✔️                  | ✔️                | ⭐⭐⭐⭐              |
| Subtraction | ✔️                  | ✔️                | ⭐⭐⭐⭐              |
| Transpose   | ❌                   | ✔️                | ⭐⭐⭐⭐              |

---

## 🌱 Beginner Tips

* ✨ Always ensure matrix dimensions are valid
* ✨ Addition & subtraction require same matrix size
* ✨ Practice tracing indices `(i, j)` on paper
* ✨ Transpose swaps row & column indices

---


## 🤝 Contributing

Beginners are welcome to:

* Add comments for clarity
* Improve formatting
* Add new matrix operations

---

## ⭐ Support

If this folder helped you:

* 🌟 Star the repository
* 🍴 Fork it for practice
* 🧑‍💻 Share with classmates

---

**Happy Coding with Matrices in C! 💻✨**
