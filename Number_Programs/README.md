# 🔢 Number_Programs (C)

Welcome to **Number_Programs** — a small set of beginner-friendly C programs that help you practice **number logic**, **loops**, **functions**, and **recursion**.

📌 Folder inside: `Basic-C-Programs/Number_Programs`  
✅ Best for: First-year C learners / lab practice / interview basics  

---

## 📂 Contents

| Program File | What it Does | Core Concepts |
|------------|--------------|---------------|
| `factorial.c` | Calculates factorial of a number `n` | loops, multiplication logic, input/output |
| `fibonacci series.c` | Prints Fibonacci sequence up to `n` terms (iterative) | loops, sequence generation |
| `fibonacci_recursive.c` | Fibonacci using recursion | recursion, base case, function calls |

---

## 🧠 Concepts You’ll Practice

✅ `scanf()` / `printf()`  
✅ `for` / `while` loops  
✅ Basic math logic  
✅ Function creation & calling  
✅ **Recursion** (and why it can be slow)

---

## ⚙️ How to Run (Step-by-Step)

### ✅ Requirements
- GCC compiler (recommended)
- Any C IDE (VS Code / Code::Blocks / Dev C++)

### 📌 Compile & Run

> **Important:** One file has a space in its name: `fibonacci series.c`  
> So compile it using quotes ✅

#### 1) Factorial
```bash
gcc factorial.c -o factorial
./factorial
```

#### 2) Fibonacci (Iterative)
```bash
gcc "fibonacci series.c" -o fib_iter
./fib_iter
```

#### 3) Fibonacci (Recursive)
```bash
gcc fibonacci_recursive.c -o fib_rec
./fib_rec
```

---

## 📌 Program Explanations

### 1️⃣ `factorial.c` — Factorial of a Number
📍 Factorial means:

`n! = n × (n−1) × (n−2) × ... × 1`

✅ Example:
- Input: `5`
- Output: `120`

🧩 Typical Flow:
1. Read `n`
2. Initialize `fact = 1`
3. Multiply from `1` to `n`
4. Print result

⏱️ Time Complexity: **O(n)**  
🧠 Space Complexity: **O(1)**

⚠️ Beginner Tip:
- Use a bigger datatype (`long long`) for larger factorials to avoid overflow.

---

### 2️⃣ `fibonacci series.c` — Fibonacci Series (Iterative)
📍 Fibonacci sequence:

`0, 1, 1, 2, 3, 5, 8, 13, ...`

Each term = sum of previous two:
`F(n) = F(n-1) + F(n-2)`

✅ Example (n = 7):
`0 1 1 2 3 5 8`

🧩 Typical Flow:
1. Read number of terms `n`
2. Start with `a = 0`, `b = 1`
3. Loop `n` times, printing and updating values

⏱️ Time Complexity: **O(n)**  
🧠 Space Complexity: **O(1)**

---

### 3️⃣ `fibonacci_recursive.c` — Fibonacci Using Recursion
This version uses a function like:

`fib(n) = fib(n-1) + fib(n-2)`

✅ Base cases usually are:
- `fib(0) = 0`
- `fib(1) = 1`

📌 Why learn this?
- It teaches **recursion + base cases** clearly.

⚠️ Important Note (Very Beginner-Friendly Explanation):
- Recursive Fibonacci becomes **slow for large n** because it repeats the same calculations many times.

⏱️ Time Complexity: **O(2^n)** (slow)  
🧠 Space Complexity: **O(n)** (due to call stack)

✅ Upgrade idea:
- Add **memoization** or write iterative (which you already have).

---

## 🧪 Suggested Inputs to Test

✅ Factorial:
- `0` → should output `1`
- `1` → `1`
- `5` → `120`

✅ Fibonacci:
- `1` → `0`
- `2` → `0 1`
- `7` → `0 1 1 2 3 5 8`

---





## 🤝 Contributing

Want to add more number programs?

1. Fork the repo
2. Add your `.c` file in `Number_Programs`
3. Keep code clean + add comments
4. Create a pull request ✅

---

## 📌 Folder Structure

```txt
Number_Programs/
├── factorial.c
├── fibonacci series.c
└── fibonacci_recursive.c
```

---

⭐ If you found these helpful, consider starring the repo!  
Happy Coding! 💻🔥
