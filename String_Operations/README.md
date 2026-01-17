# String Operations (C)

Welcome to **String_Operations** 📌  
This folder contains a collection of beginner-friendly C programs that focus on **string manipulation**.

Strings are one of the most important topics in C because they teach you:

✅ Character arrays (`char str[]`)  
✅ Looping through characters  
✅ Manual implementation of built-in functions  
✅ Logic building + edge case handling  

---

## 📂 Folder Structure

```txt
String_Operations/
├── longer_string.c
├── string_comparison.c
├── string_concatenation.c
├── string_copy.c
├── string_length.c
├── string_palindrome.c
├── string_reverse.c
├── substring_count.c
└── vowel_check.c
```

---

## ⚙️ How to Run Any Program

### ✅ Compile
```bash
gcc filename.c -o output
```

### ✅ Run
```bash
./output
```

> 💡 Tip: If you are using Windows, run:
```bash
output.exe
```

---

# 📌 File-by-File Analysis

Below is a detailed explanation of each file, including the **logic**, **approach**, and important learning points.

---

## 1️⃣ `string_length.c` — Find Length of a String

### 🎯 Goal
Calculate the length of a string (number of characters before `\0`).

### 🧠 How it Works
- Reads a string
- Uses a loop to count characters until the null terminator `\0`

### ✅ Key Learning
- Strings in C are **null-terminated**
- Length does **NOT** include `\0`

### ⏱ Complexity
- **Time:** O(n)
- **Space:** O(1)

---

## 2️⃣ `string_copy.c` — Copy One String into Another

### 🎯 Goal
Copy characters from a source string into a destination string.

### 🧠 How it Works
- Reads original string
- Copies each character one-by-one
- Adds `\0` at the end

### ✅ Key Learning
- Manual version of `strcpy()`
- Always ensure destination array has enough space

### ⏱ Complexity
- **Time:** O(n)
- **Space:** O(1)

---

## 3️⃣ `string_concatenation.c` — Concatenate Two Strings

### 🎯 Goal
Join two strings into one (append second string at the end of first).

### 🧠 How it Works
- Find end of first string
- Start copying second string from that point
- Add `\0` at the end

### ✅ Key Learning
- Manual version of `strcat()`
- Buffer size matters (avoid overflow)

### ⏱ Complexity
- **Time:** O(n + m)
- **Space:** O(1)

---

## 4️⃣ `string_comparison.c` — Compare Two Strings

### 🎯 Goal
Check whether two strings are equal or which one is larger.

### 🧠 How it Works
- Compare character-by-character
- Stop when mismatch found or end reached

### ✅ Key Learning
- Manual version of `strcmp()`
- Comparison is based on ASCII values

### ⏱ Complexity
- **Time:** O(min(n, m))
- **Space:** O(1)

---

## 5️⃣ `string_reverse.c` — Reverse a String

### 🎯 Goal
Reverse a string (example: `"hello"` → `"olleh"`)

### 🧠 How it Works
- Find string length
- Swap characters from start and end moving inward

### ✅ Key Learning
- Indexing and swapping
- In-place reversal vs using extra array

### ⏱ Complexity
- **Time:** O(n)
- **Space:** O(1)

---

## 6️⃣ `string_palindrome.c` — Check Palindrome String

### 🎯 Goal
Check whether a string reads the same forward and backward.

Example:
- `"madam"` ✅ palindrome
- `"hello"` ❌ not palindrome

### 🧠 How it Works
- Compare first and last characters
- Move inward until mismatch or middle reached

### ✅ Key Learning
- Two-pointer technique
- Case sensitivity and spaces can affect results

### ⏱ Complexity
- **Time:** O(n)
- **Space:** O(1)

---

## 7️⃣ `substring_count.c` — Count Occurrences of a Substring

### 🎯 Goal
Count how many times a substring appears inside a main string.

Example:
- String: `"abababa"`
- Substring: `"aba"`
- Count depends on overlapping logic

### 🧠 How it Works
- Loop through main string
- At each position, try matching substring
- Increase count when match found

### ✅ Key Learning
- Nested loops for pattern matching
- Overlapping vs non-overlapping counts

### ⏱ Complexity
- **Time:** O(n*m)
- **Space:** O(1)

---

## 8️⃣ `vowel_check.c` — Count or Check Vowels

### 🎯 Goal
Identify vowels in a string (a, e, i, o, u).

### 🧠 How it Works
- Loop through each character
- Check if character is vowel (upper/lower case)
- Count vowels or print them

### ✅ Key Learning
- Character comparisons
- Handling both uppercase and lowercase vowels

### ⏱ Complexity
- **Time:** O(n)
- **Space:** O(1)

---

## 9️⃣ `longer_string.c` — Find the Longer String

### 🎯 Goal
Compare two strings and determine which is longer.

### 🧠 How it Works
- Compute length of both strings manually (or using loop)
- Compare lengths and print the result

### ✅ Key Learning
- Length-based comparison
- Good practice for loops + string traversal

### ⏱ Complexity
- **Time:** O(n + m)
- **Space:** O(1)

---

# 🧪 Recommended Test Inputs

Try these to verify outputs:

### ✅ For Reverse / Palindrome
- `madam`
- `racecar`
- `hello`

### ✅ For Substring Count
- String: `aaaaa`
- Substring: `aa`
- String: `abababa`
- Substring: `aba`

### ✅ For Vowel Check
- `ChatGPT`
- `Beautiful Day`

---



# ⭐ Why This Folder is Useful

This folder is perfect for:

📌 C lab assignments  
📌 Practicing string fundamentals  
📌 Understanding how built-in string functions work internally  


---

✅ Happy Coding! 💻🔥
