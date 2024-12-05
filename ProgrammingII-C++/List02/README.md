# Programming II - Exercise List 2

This folder contains solutions for the second exercise list of the Programming II course. The focus of this list is to explore **string manipulation**, **functions**, and **control structures** in C++. Below is a summary of the exercises included.

---

## 📋 Exercises

### 1. Password Validation Program
**Objective**: Write a program that requires the user to create a password meeting the following criteria:  
- At least two numbers.  
- At least one special character (`@, #, %, &, $`).  
- At least one uppercase letter.  
- At least one lowercase letter.  

The program should validate the password and output whether it meets the criteria. If not, it will indicate which requirements are missing. The program continues to prompt until a valid password is entered.  
**Key Concepts**:  
- String manipulation functions.  
- Loops and conditional statements.  

---

### 2. TCP Congestion Window Simulation
**Objective**: Simulate the behavior of TCP congestion control with three main functions:  
1. **reset**: Resets the transmission window size to its initial value.  
2. **increment**: Increases the window size by 1.  
3. **double**: Doubles the window size (up to a maximum value).  

The program simulates TCP transmission for 100 seconds, where the window grows incrementally and doubles after a threshold until a maximum size of 100 is reached. At specific times (user-defined), the window size is reset due to packet loss.  

**Key Concepts**:  
- Functions with pointer parameters for state changes.  
- Loops and simulations.  
- Input validation and formatted output.  

---

### 3. Substring Search
**Objective**: Implement a function to search for a substring within a string. The function should return:  
- `true`: If the substring is found.  
- Position of the substring within the main string (starting index).  

**Example**:  
- Input: Main string = "JANELA", Substring = "NELA".  
- Output: Found, starting position = 2.

**Key Concepts**:  
- String traversal and comparison.  
- Use of return values for function behavior.

---

## 🚀 Concepts Applied
- String manipulation and validation.
- Functions with parameters and return values.
- Simulation using loops and conditional structures.
- Input/output formatting for clear user interaction.

