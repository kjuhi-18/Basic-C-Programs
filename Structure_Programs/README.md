# 🏢 Structure_Programs (C)

Welcome to **Structure_Programs** 📌  
This folder contains C programs that focus on one of the most important concepts in C:

✅ **Structures (`struct`)**

Structures help us store multiple related values together (like employee details) using a single variable.

---

## 📂 Folder Structure

```txt
Structure_Programs/
└── employee_payslip.c
```

---

## 📌 Program Included

### ✅ `employee_payslip.c`
This program collects details of multiple employees and generates a **payslip** for each one.

---

## 🎯 What This Program Does

For each employee, it takes input of:

- Employee ID  
- Employee Name  
- Designation  
- Department  
- Basic Salary  

Then it calculates:

💰 **Net Salary** using this formula:

```
Net Salary = 2000 + (Basic Salary × 0.85)
```

📌 Meaning:
- 15% deduction from basic salary  
- +2000 allowance added  

---

## 🧠 Concepts Used

This program helps you practice:

✅ `struct` in C  
✅ Arrays of structures (`struct employees emp[n]`)  
✅ Taking multiple inputs using `scanf()` and `gets()`  
✅ Loops (`for`)  
✅ Basic salary calculations  
✅ Printing formatted payslips  

---

## ⚙️ How to Run the Program

### ✅ Step 1: Open terminal in this folder
```bash
cd Structure_Programs
```

### ✅ Step 2: Compile the program
```bash
gcc employee_payslip.c -o payslip
```

### ✅ Step 3: Run it
```bash
./payslip
```

---

## 🧪 Sample Output (Example Run)

### 🟦 Input
```
Enter number of employees: 2

Enter employee 1 details
Enter Employee ID: E101
Enter Employee Name: Rahul Sharma
Enter Designation: Developer
Enter Department: IT
Enter Basic Salary: 30000

Enter employee 2 details
Enter Employee ID: E102
Enter Employee Name: Priya Singh
Enter Designation: Analyst
Enter Department: Finance
Enter Basic Salary: 40000
```

### 🟩 Output
```
Employee 1 Payslip:
Employee ID:E101
Name:Rahul Sharma
Designation:Developer
Department:IT
Gross salary is:30000.00
Net salary after deduction of 15 percent and adding 2000 allowence is:27500.00

Employee 2 Payslip:
Employee ID:E102
Name:Priya Singh
Designation:Analyst
Department:Finance
Gross salary is:40000.00
Net salary after deduction of 15 percent and adding 2000 allowence is:36000.00
```

---

## 📌 Explanation (Beginner Friendly)

### 🔹 Why use `struct` here?
Because employee details contain multiple different fields:

- ID (string)
- Name (string)
- Designation (string)
- Department (string)
- Salary (float)

Instead of making separate arrays for each, we combine them in one structure:

```c
struct employees {
    char id_no[20];
    char name[50];
    char design[20];
    char dep[60];
    float basicsalary;
    float netsalary;
};
```

Then we create an array of employees:

```c
struct employees emp[n];
```

So we can store details of multiple employees easily.

---





## ⭐ Why This Program is Useful

This is a great beginner project because it teaches:

📌 Real-world use of structures  
📌 Working with multiple employees  
📌 Salary calculation logic  
📌 Printing formatted output  

---

✅ Happy Coding! 💻🔥
