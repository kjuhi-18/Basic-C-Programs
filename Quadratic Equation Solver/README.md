# 🧮 Quadratic Equation Solver (C)

Welcome to **Quadratic Equation Solver** 📌  
This folder contains a C program that solves a **quadratic equation** and prints its roots.

A quadratic equation looks like:

\[
ax^2 + bx + c = 0
\]

This program supports:
✅ Real & distinct roots  
✅ Real & equal roots  
✅ Complex roots (imaginary)  
✅ Handles invalid quadratic equation when `a = 0`

---

## 📂 Folder Structure

```txt
Quadratic Equation Solver/
└── code.c
```

---

## 📌 Program Included

### ✅ `code.c`
This program takes input values of **a, b, and c** and finds the roots using the discriminant formula.

---

## 🧠 Concepts Used

This program helps you practice:

✅ `scanf()` and `printf()`  
✅ Conditional statements (`if-else`)  
✅ Mathematical calculations  
✅ Using `<math.h>` for `sqrt()`  
✅ Discriminant-based root logic  
✅ Handling real and complex roots  

---

## 📌 Discriminant Formula

The discriminant is:

\[
D = b^2 - 4ac
\]

Based on the value of **D**:

### ✅ Case 1: `D > 0` (Two distinct real roots)
\[
root1 = \frac{-b + \sqrt{D}}{2a}
\]
\[
root2 = \frac{-b - \sqrt{D}}{2a}
\]

### ✅ Case 2: `D = 0` (Two equal real roots)
\[
root1 = root2 = \frac{-b}{2a}
\]

### ✅ Case 3: `D < 0` (Complex roots)
\[
realPart = \frac{-b}{2a}
\]
\[
imagPart = \frac{\sqrt{-D}}{2a}
\]

Roots become:
\[
realPart + imagPart i
\]
\[
realPart - imagPart i
\]

---

## ⚙️ How to Run the Program

### ✅ Step 1: Open terminal in this folder
```bash
cd "Quadratic Equation Solver"
```

### ✅ Step 2: Compile the program
> Since this program uses `sqrt()` from `<math.h>`, we must link the math library using `-lm`

```bash
gcc code.c -o quadratic -lm
```

### ✅ Step 3: Run it
```bash
./quadratic
```

---

## 🧪 Sample Output (Example Runs)

### 🟦 Example 1: Two Real & Distinct Roots
**Input**
```
Please enter the cofficients of a,b,c: 1 5 6
```

**Output**
```
The given equation is 1.000000x^2+5.000000x+6.000000
The roots are -2.000000 -3.000000
```

---

### 🟩 Example 2: Equal Roots
**Input**
```
Please enter the cofficients of a,b,c: 1 2 1
```

**Output**
```
The given equation is 1.000000x^2+2.000000x+1.000000
The roots are -1.000000, -1.000000
```

---

### 🟥 Example 3: Complex Roots
**Input**
```
Please enter the cofficients of a,b,c: 1 2 5
```

**Output**
```
The given equation is 1.000000x^2+2.000000x+5.000000
The roots are -1.000000+ 2.000000i, -1.000000- 2.000000i
```

---

### ❌ Example 4: Not a Quadratic Equation
**Input**
```
Please enter the cofficients of a,b,c: 0 2 3
```

**Output**
```
This is not a quadrtic equation
```

---


## ⭐ Why This Program is Useful

This is a classic beginner program because it teaches:

📌 Using math formulas in programming  
📌 Decision making using conditions  
📌 Handling real vs complex solutions  
📌 Linking external libraries like `math.h`

---

✅ Happy Coding! 💻🔥
