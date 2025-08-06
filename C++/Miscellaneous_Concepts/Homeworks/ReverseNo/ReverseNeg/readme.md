
# ✅ Reverse an Integer in C++

This project contains **two separate implementations** for reversing an integer:

---

## **1. `reverseNumber_int.cpp`** (Integer-Based Approach)

### 🔹 Description:

* Reverses an integer by using arithmetic operations.
* Handles negative numbers correctly (returns negative reversed number).
* Does **not** preserve leading zeros (e.g., `100 → 1`).

### 🔹 Code:

```cpp
int reverseNumber(int n) {
    bool isNegative = (n < 0);
    if (isNegative) n = -n;

    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return isNegative ? -rev : rev;
}
```

### 🔹 Examples:

* `reverseNumber(521)` → `125`
* `reverseNumber(-521)` → `-125`
* `reverseNumber(100)` → `1`

---

## **2. `reverseNumber_string.cpp`** (String-Based Approach)

### 🔹 Description:

* Reverses an integer by converting digits into a **string**.
* Handles negative numbers correctly.
* **Preserves leading zeros** (e.g., `100 → "001"`).

### 🔹 Code:

```cpp
string reverseNumber(int n) {
    bool isNegative = (n < 0);
    if (isNegative) n = -n;

    string rev = "";
    while (n > 0) {
        int digit = n % 10;
        rev += to_string(digit);
        n = n / 10;
    }

    if (isNegative) rev = "-" + rev;
    return rev;
}
```

### 🔹 Examples:

* `reverseNumber(521)` → `"125"`
* `reverseNumber(-521)` → `"-125"`
* `reverseNumber(100)` → `"001"`
* `reverseNumber(-100)` → `"-001"`

---

## ✅ Key Differences:

| Feature                | Integer Version | String Version |
| ---------------------- | --------------- | -------------- |
| Handles negative sign? | ✅ Yes           | ✅ Yes          |
| Keeps leading zeros?   | ❌ No            | ✅ Yes          |
| Return type            | `int`           | `string`       |

---
