# 🧠 42 C++ Modules (00–05)

## 📚 Overview

This repository contains the first six projects (**Module 00 → 05**) from the **42 C++ Piscine / Core Curriculum**.
Each module introduces new C++ concepts through small, focused exercises that build on each other.

By completing these modules, you develop:

* A deep understanding of **Object-Oriented Programming (OOP)**
* Mastery of **C++ syntax and semantics**
* Confidence in **designing, structuring, and debugging** C++ applications

---

## 🧩 Modules Summary

| Module | Focus                           | Key Concepts                                                         |
| :----: | :------------------------------ | :------------------------------------------------------------------- |
| **00** | Basics & I/O                    | Classes, members, methods, std::cout, basic syntax                   |
| **01** | Memory & References             | new/delete, pointers, references, file streams                       |
| **02** | Canonical Form & Fixed Point    | Orthodox canonical form, operator overloading                        |
| **03** | Inheritance                     | Base/derived classes, constructors, access specifiers                |
| **04** | Polymorphism & Abstract Classes | Virtual functions, pure virtual, interface classes                   |
| **05** | Exceptions & Bureaucracy        | Exception handling, abstract base classes, polymorphism, file output |

---

## ⚙️ Build Instructions

Each module has its own Makefile.
To compile and run an exercise:

```bash
cd cpp05/ex02
make
./Bureaucracy
```

Cleaning commands:

```bash
make clean      # remove object files
make fclean     # remove binary
make re         # rebuild
```

---

## 🧱 Repository Structure

```
📦 cpp-modules/
 ┣ 📂 cpp00/
 ┣ 📂 cpp01/
 ┣ 📂 cpp02/
 ┣ 📂 cpp03/
 ┣ 📂 cpp04/
 ┣ 📂 cpp05/
 ┗ 📜 README.md
```

Each folder contains:

* `Makefile`
* `main.cpp` test file
* `.hpp` / `.cpp` files for classes and logic

---

## 🔍 Key Concepts Across Modules

### 🧩 Encapsulation

Defining clear interfaces and hiding implementation details using private/public members.

### ⚙️ Memory Management

Manual management using `new`, `delete`, references, and smart practices to prevent leaks.

### 🧬 Inheritance & Polymorphism

Creating flexible class hierarchies with virtual methods and overriding behavior dynamically.

### 🚨 Exception Handling

Building robust systems with `try/catch` and custom exception classes.

### 🏗️ Canonical Form

Following the 42 “Orthodox Canonical Form”:
Default constructor, copy constructor, copy assignment operator, and destructor.

---

## 🧠 Module Highlights

### 🧩 **Module 00**

Introduction to C++ syntax, classes, and objects.
Simple exercises like a **PhoneBook** and **Account Manager**.

### 💾 **Module 01**

Explores dynamic memory, references, and file streams.
Introduces `Zombie`, `Weapon`, and `Human` classes.

### 🧮 **Module 02**

Operator overloading and canonical form.
Implements a **Fixed-point number** class.

### ⚔️ **Module 03**

Inheritance with **ClapTrap**, **ScavTrap**, and **FragTrap** classes.

### 🧬 **Module 04**

Abstract classes and polymorphism:
`Animal`, `Dog`, `Cat`, and `Brain` hierarchy.

### 🏛️ **Module 05**

Exception handling and polymorphic behavior:
`Bureaucrat`, `AForm`, and specialized forms like:

* `ShrubberyCreationForm`
* `RobotomyRequestForm`
* `PresidentialPardonForm`
* `Intern` (factory pattern)

---

## 🧾 Example Output (Module 05)

```
Intern creates robotomy request form.
Boss signed RobotomyRequestForm
Boss executed RobotomyRequestForm
Bzzzz... drilling noises...
Bender has been robotomized successfully!
```

---

## 🏁 Author

**Abdeljalil Sebbar**
🎓 42 Student | 💻 C++ Developer | 🌍 Passionate about low-level programming
📧 Contact: abdeljalilsebbar1@gmail.com
🌐 GitHub: https://github.com/AbdeljalilSebbar

---

> *“Object-oriented programming is not about objects — it’s about clean thinking.”*
> — Alan Kay
