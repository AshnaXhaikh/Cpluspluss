---

## 🧠 Data Type Modifiers in C++

Data type modifiers in C++ are keywords that **modify the size or sign** of basic data types like `int` or `double`.

---

### 🔸 Types of Modifiers:

* `signed`
* `unsigned`
* `short`
* `long`

---

### 📌 Examples:

```cpp
unsigned int a = 10;     // Only positive values
signed int b = -5;       // Can store negative and positive

short int c = 100;       // Uses less memory than int
long int d = 100000;     // Can store larger numbers than int
```

---

### 🧮 Tip:

Use modifiers when you:

* Want to **save memory** (`short`)
* Need to **store large values** (`long`)
* Want to **avoid negative values** (`unsigned`)

---