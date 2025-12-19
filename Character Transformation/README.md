# 🔤 Character Transformation (C Program)

A **beginner‑friendly C program** that demonstrates how characters can be **transformed and manipulated** using ASCII values and standard C logic.

> 🎯 Perfect for understanding **characters, ASCII, conditions, and basic string handling** in C.

---

## 📂 Folder Structure

```
Basic-C-Programs/
└── Character Transformation/
    ├── code.c
    └── README.md
```

---

## 🧠 What You’ll Learn

* ✔️ How characters are stored internally using ASCII values
* ✔️ Manual conversion of characters using ASCII arithmetic
* ✔️ Difference between uppercase and lowercase letters in ASCII
* ✔️ Taking single character input using `scanf()`

---

## 📄 Program Overview (`code.c`)

This program demonstrates **manual case conversion** using **ASCII arithmetic**.

### ✨ What the Program Does

1. Accepts a **lowercase character** from the user
2. Converts it to **uppercase** using `ASCII - 32`
3. Accepts an **uppercase character** from the user
4. Converts it to **lowercase** using `ASCII + 32`

> 💡 This program does **not use if‑else conditions**. It assumes that the user enters **valid alphabet characters only**.

---

## ▶️ How to Run the Program

### 1️⃣ Compile

```bash
gcc code.c -o transform
```

### 2️⃣ Execute

```bash
./transform
```

---

## 🧪 Sample Input / Output

**Input:**

```
Enter the lower case character: a
Enter the Upper case character: Z
```

**Output:**

```
a character in the upper case is: A
Z character in the lower case is: z
```

---

**Input:**

```
Enter a character: Z
```

**Output:**

```
Lowercase equivalent: z
```

---

## 🔢 ASCII Insight (Beginner Tip)

| Character | ASCII Value |
| --------- | ----------- |
| `A`       | 65          |
| `Z`       | 90          |
| `a`       | 97          |
| `z`       | 122         |

📌 Difference between lowercase & uppercase letters = **32**

---

## 🌱 Beginner Tips

* ✨ Remember: characters are stored as numbers (ASCII)
* ✨ Always check character range before converting
* ✨ Practice by modifying the program for strings
* ✨ Try handling multiple characters using loops

---



## 🤝 Contributing

New learners are welcome to:

* Improve comments
* Add more transformation cases
* Optimize logic

---

## ⭐ Support

If this helped you:

* 🌟 Star the repository
* 🍴 Fork it for practice
* 🧑‍💻 Share with classmates

---

**Happy Learning C Programming! 💻✨**
