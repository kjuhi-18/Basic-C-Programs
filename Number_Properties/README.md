# 🔢 Number_Properties (C)

Welcome to **Number_Properties** 📌  
This folder contains C programs that help you check basic **number properties** like:

✅ Prime / Composite  
✅ Even / Odd  

These are some of the most common beginner problems in C programming and are perfect for strengthening logic building 💡

---

## 📂 Folder Structure

```txt
Number_Properties/
└── prime_even_odd.c
```

---

## 📌 Program Included

### ✅ `prime_even_odd.c`
This program allows the user to enter a number and choose what they want to check:

### 🎯 Features
🔹 Check whether a number is **Prime or Composite**  
🔹 Check whether a number is **Even or Odd**  
🔹 Handles special cases like:
- `0` and `1` (neither prime nor composite)
- Negative numbers (invalid input)

---

## 🧠 Concepts Used

This program helps you practice:

✅ `scanf()` and `printf()`  
✅ `switch-case` statements  
✅ `for` loop  
✅ Modulus operator `%`  
✅ Prime number logic using divisibility  
✅ Flags (`flag` variable) for decision making  

---

## ⚙️ How to Run the Program

### ✅ Step 1: Open terminal in this folder
```bash
cd Number_Properties
```

### ✅ Step 2: Compile the program
```bash
gcc prime_even_odd.c -o prime_even_odd
```

### ✅ Step 3: Run it
```bash
./prime_even_odd
```

---

## 🧪 Sample Output (Example Runs)

### 🟦 Prime Check Example
**Input**
```
Enter an positive integer: 7
What you want to do?
Press 1 for finding whether the given number is prime or not prime
Press 2 for finding even or odd: 1
```

**Output**
```
7 is a prime number
```

---

### 🟩 Composite Check Example
**Input**
```
Enter an positive integer: 10
Press 1 ... prime
Press 2 ... even/odd: 1
```

**Output**
```
10 is a composite number
```

---

### 🟨 Even/Odd Example
**Input**
```
Enter an positive integer: 15
Press 1 ... prime
Press 2 ... even/odd: 2
```

**Output**
```
This is a odd number!!
```

---

### 🟥 Special Case Example (0 or 1)
**Input**
```
Enter an positive integer: 1
Press 1 ... prime
Press 2 ... even/odd: 1
```

**Output**
```
This is neither prime nor composite
```

---

### ❌ Invalid Input Example (Negative Number)
**Input**
```
Enter an positive integer: -5
Press 1 ... prime
Press 2 ... even/odd: 1
```

**Output**
```
Invalid input
```

---

## 🔍 Logic Explanation (Beginner Friendly)

### ⭐ Prime Check Logic
A number is prime if:
- it is greater than 1
- and it has **no divisors other than 1 and itself**

This program checks divisibility from:
```
2 to n/2
```

If any number divides `n` perfectly:
```c
if(n%i==0)
```
then it becomes **composite**.

---

## ⭐ Why This Program is Useful

This is a **classic C beginner program** because it teaches:

📌 How to take user input  
📌 How to give choices using switch-case  
📌 How to apply mathematical logic in programming  

---

✅ Happy Coding! 💻🔥  

