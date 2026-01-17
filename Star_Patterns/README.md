# ⭐ Star_Patterns (C)

Welcome to **Star_Patterns** 🌟  
This folder contains beginner-friendly C programs that print **star (*) patterns** using loops.

Pattern programs are great for learning:

✅ Nested loops  
✅ Printing logic  
✅ Row & column understanding  
✅ Problem-solving using simple logic  

---

## 📂 Folder Structure

```txt
Star_Patterns/
├── star_triangle.c
└── star_triangle_inverse.c
```

---

## 📌 Programs Included

### 1️⃣ `star_triangle.c` — Left-Aligned Star Triangle
This program prints a **left-aligned right triangle** of stars.

📌 Example (n = 5):
```
* 
* * 
* * * 
* * * * 
* * * * * 
```

🧠 Logic:
- Outer loop controls **rows**
- Inner loop prints **stars in each row**
- Stars increase as row number increases

---

### 2️⃣ `star_triangle_inverse.c` — Right-Aligned Star Triangle
This program prints a **right-aligned triangle** of stars using spaces.

📌 Example (n = 5):
```
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
```

🧠 Logic:
- First inner loop prints **spaces**
- Second inner loop prints **stars**
- Stars increase each row, but spaces decrease each row

---

## 🧠 Concepts Used

These programs help you practice:

✅ `scanf()` and `printf()`  
✅ Nested loops (`for` inside `for`)  
✅ Pattern printing logic  
✅ Formatting using spaces  
✅ Building strong loop fundamentals  

---

## ⚙️ How to Run the Programs

### ✅ Step 1: Open terminal in this folder
```bash
cd Star_Patterns
```

### ✅ Step 2: Compile

#### Compile left-aligned triangle
```bash
gcc star_triangle.c -o triangle
```

#### Compile right-aligned triangle
```bash
gcc star_triangle_inverse.c -o triangle_right
```

### ✅ Step 3: Run

```bash
./triangle
```

or

```bash
./triangle_right
```

---

## 🧪 Sample Output (Example Runs)

### ⭐ Left-Aligned Triangle
**Input**
```
Enter the length of traingle: 4
```

**Output**
```
* 
* * 
* * * 
* * * * 
```

---

### ⭐ Right-Aligned Triangle
**Input**
```
Enter the length of traingle: 4
```

**Output**
```
      * 
    * * 
  * * * 
* * * * 
```

---

## 📌 Beginner Explanation (How Pattern Programs Work)

Pattern programs are mainly based on:

### 🔹 Rows
The outer loop decides how many rows to print.

### 🔹 Columns
The inner loops decide:
- How many spaces to print
- How many stars to print

Example:
- Row 1 → 1 star  
- Row 2 → 2 stars  
- Row 3 → 3 stars  

---


---

## ⭐ Why This Folder is Useful

Star patterns are commonly asked in:

📌 C lab assignments  
📌 Logic-building practice  
  

They help you master loops faster than normal problems 🔥

---

✅ Happy Coding! 💻🌟
