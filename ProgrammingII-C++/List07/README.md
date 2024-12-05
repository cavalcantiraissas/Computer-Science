# C++ Project: Product Management System with Exception Handling and Namespaces

## Exercise 1: Product Management System with Exception Handling and Namespaces

### Description
This project involves the implementation of a product management system that allows users to register and query products in inventory. The system should make use of namespaces to organize the classes and functions, and handle common errors using appropriate exceptions.

### Requirements

- **Namespaces:**
  - Create two namespaces: `Cadastro` and `Consulta`.
  - The `Cadastro` namespace should contain a `Produto` class with methods to register products.
  - The `Consulta` namespace should contain functions to search for products by code.
  
- **Produto Class:**
  - The `Produto` class should have attributes like `codigo`, `nome`, `preco`, and `quantidade`.
  - Include methods to register, retrieve, and update product information.
  - Use an `std::invalid_argument` exception to throw errors when trying to register a product with an invalid code or name.
  
- **Consulta Function:**
  - Create a `buscarProduto` function in the `Consulta` namespace that takes a product code and returns the corresponding product information.
  - Throw an `std::out_of_range` exception if the product code is not found.
  
- **Exception Handling:**
  - Use `try-catch` blocks to capture `std::invalid_argument` and `std::out_of_range` exceptions.
  
- **Project Organization:**
  - Separate the project into multiple files, separating the interface (.h files) from the implementations (.cpp files) and a separate main file.
  - Provide a Makefile for compiling the files.

### Objective:
Practice the use of namespaces, exception handling, and memory management in C++.

---

## Exercise 2: Sales System with Exceptions and Casting

### Description
This exercise involves the development of a sales system that includes different types of products, using inheritance and casting to manage the products and handle errors appropriately.

### Requirements

- **Base and Derived Classes:**
  - Create a base class `Item` with attributes such as `codigo`, `preco`, and `qtdEstoque`.
  - Create derived classes `Eletronico` (Electronic) and `Vestuario` (Clothing) that inherit from `Item`.
  
- **Product Handling:**
  - Use `dynamic_cast` to convert pointers of `Item` to `Eletronico` or `Vestuario`.
  - Throw and catch an `std::bad_cast` exception if the casting is invalid.
  - Simulate a scenario where a `std::bad_cast` exception is thrown.
  
- **Sales System:**
  - Create a function to simulate the sale of a product, throwing a `std::runtime_error` exception if there is insufficient stock.
  
- **Project Organization:**
  - Separate the project into multiple files, separating the interface (.h files) from the implementations (.cpp files) and a separate main file.
  - Provide a Makefile for compiling the files.

### Objective:
Reinforce the application of inheritance, the use of `dynamic_cast`, and handling multiple exceptions in C++.


