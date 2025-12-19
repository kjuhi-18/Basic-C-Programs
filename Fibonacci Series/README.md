# 🔢 Fibonacci Series (C Programs)

This folder contains **beginner-friendly C programs** that demonstrate how to generate the **Fibonacci Series** using different approaches.

> 🎯 Ideal for understanding **loops, arrays, and basic number series logic** in C.

---

## 📂 Folder Structure

```
Basic-C-Programs/
└── Fibonacci Series/
    ├── basic_fibonacci.c
    ├── fibonacci_array.c
    └── README.md
```

---

## ⭐ What Is the Fibonacci Series?

The **Fibonacci Series** is a sequence of numbers where **each number is the sum of the previous two numbers**.

The series starts with:
```
0, 1
```

And continues as:
```
0, 1, 1, 2, 3, 5, 8, 13, ...
```

Mathematically:
```
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2)
```

---

## 🧠 What You’ll Learn

- ✔️ How to generate Fibonacci numbers using loops
- ✔️ How to store series values using arrays
- ✔️ Basic use of variables and iteration
- ✔️ Understanding number series logic in C

---

## 📄 Program Overview

### 🔹 `basic_fibonacci.c`

**Approach:** Iterative (without using arrays)

- Generates Fibonacci numbers one by one using variables
- Best for beginners to understand the **core logic**
- Uses a loop and simple arithmetic operations

**Concepts used:**
- `for` / `while` loop
- Variables
- Basic arithmetic

---

### 🔹 `fibonacci_array.c`

**Approach:** Using an array

- Stores Fibonacci numbers inside an array
- Prints the entire series from the array
- Helps understand **arrays + loops together**

**Concepts used:**
- Arrays
- Loops
- Index-based access

---

## ▶️ How to Compile and Run

### 1️⃣ Compile

```bash
gcc basic_fibonacci.c -o basic_fib
gcc fibonacci_array.c -o fib_array
```

### 2️⃣ Execute

```bash
./basic_fib
./fib_array
```

---

## 🧪 Sample Input / Output

**Input:**
```
Enter number of terms: 7
```

**Output:**
```
Fibonacci Series: 0 1 1 2 3 5 8
```

---

## 📊 Comparison of Approaches

| Program              | Uses Loop | Uses Array | Beginner Friendly |
|----------------------|-----------|------------|-------------------|
| `basic_fibonacci.c`  | ✔️        | ❌         | ⭐⭐⭐⭐            |
| `fibonacci_array.c`  | ✔️        | ✔️         | ⭐⭐⭐⭐            |

---

## 🌱 Beginner Tips

- ✨ Start with `basic_fibonacci.c` to understand the logic
- ✨ Then move to `fibonacci_array.c` to learn arrays
- ✨ Try printing Fibonacci numbers up to a **maximum value**
- ✨ Practice by changing the starting values

---



## 🤝 Contributing

Beginners are welcome to:
- Add comments to improve clarity
- Add new Fibonacci methods
- Improve output formatting

---

## ⭐ Support

If this folder helped you:

- 🌟 Star the repository
- 🍴 Fork it for practice
- 🧑‍💻 Share with classmates

---

**Happy Coding in C! 💻✨**
