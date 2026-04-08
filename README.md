# 🧠 C Programming Practice Portfolio

A collection of beginner-to-intermediate C programs covering arrays, strings, functions, loops, and problem-solving fundamentals.

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Learning](https://img.shields.io/badge/Status-Active-green?style=for-the-badge)
![Lines of Code](https://img.shields.io/badge/dynamic/json?color=blue&label=Total%20Programs&query=count&url=https%3A%2F%2Fgist.githubusercontent.com%2Fraw%2Fcount.json&suffix=%2016%20programs)

---

## 📁 Program Index

| # | Program | Description | Key Concepts |
|---|---------|-------------|---------------|
| 1 | `basicArray.c` | Initialize & print array | Array declaration, `sizeof()` |
| 2 | `arrSum.c` | Calculate sum of array elements | Array traversal, accumulation |
| 3 | `num_in_arr.c` | Search for a key in array | Linear search algorithm |
| 4 | `arrReverse.c` | Reverse array in-place | Two-pointer swapping |
| 5 | `anotherArrRvr.c` | Alternative array reversal | Index manipulation |
| 6 | `arrayAppend.c` | User-input array creation | Dynamic array sizing (VLA) |
| 7 | `evenNumber.c` | Print even & odd numbers | Modulo operator, functions |
| 8 | `sumOfEven.c` | Sum even & odd separately | Multiple return values |
| 9 | `namota.c` | Generate multiplication table | Loop arithmetic |
| 10 | `basic_calculator.c` | Arithmetic operations | Conditionals, `math.h` |
| 11 | `tempCnv.c` | Temperature converter (C/F/K) | Formula implementation |
| 12 | `hishab.c` | Monthly expense calculator | Function returns, daily budget |
| 13 | `monthExpense.c` | Month-specific cost calculator | String comparison (`strcmp`) |
| 14 | `strInput.c` | Basic string input | `scanf()` limitations |
| 15 | `character_in_str.c` | Manual string length | Null terminator (`\0`) |
| 16 | `strCom.c` | Compare two strings | `strcmp()` return values |
| 17 | `loop.c` | Loop demonstration | For, while, do-while |

---

## 🚀 Featured Programs

### 1. **Array Reverser** (`arrReverse.c`)
```c
// Reverses array without extra array
for(int i=0; i<len/2; i++) {
    temp = arr[i];
    arr[i] = arr[len-1-i];
    arr[len-1-i] = temp;
}
