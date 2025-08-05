
---

# 🧠 Bitwise Operators in C++ 

This demonstrates the **basic bitwise operators** in C++ using simple examples. Bitwise operations work directly on the **binary representation** of numbers.

## 👨‍💻 Operators Covered

| Operator | Meaning              | Example   | Result |     |      |
| -------- | -------------------- | --------- | ------ | --- | ---- |
| `&`      | AND                  | `10 & 2`  | `2`    |     |      |
| \`       | \`                   | OR        | \`10   | 2\` | `10` |
| `^`      | XOR                  | `10 ^ 2`  | `8`    |     |      |
| `~`      | NOT (1’s complement) | `~10`     | `-11`  |     |      |
| `<<`     | Left Shift           | `10 << 1` | `20`   |     |      |
| `>>`     | Right Shift          | `10 >> 1` | `5`    |     |      |

## 🧾 How It Works (in simple terms)

* `&` → **Both bits must be 1** to give 1
* `|` → **At least one bit is 1** to give 1
* `^` → **Different bits** give 1
* `~` → **Flips all bits** (including sign)
* `<<` → **Shifts bits to the left** (a × 2^b)
* `>>` → **Shifts bits to the right** ( a ÷ 2^b)
Shifting left: , shifting right: a / 2
---
