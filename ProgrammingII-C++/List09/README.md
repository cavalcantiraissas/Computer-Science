# Exercises on Template Classes

## Exercise 1: Student Record
**Description**: Create a template class called `Registro` that stores information about students, such as name (type `std::string`) and grade (type `T`, which can be `int`, `float`, or `double`). Implement methods to add students, calculate the average grade, and display the list of students.  
**Objective**: Test the class with different grade types and create a simple interface to interact with the data.

## Exercise 2: Generic Queue
**Description**: Implement a template class called `Fila` (Queue) that allows adding and removing elements in a FIFO (First In, First Out) manner. The class should have methods to enqueue, dequeue, and check if the queue is empty.  
**Objective**: Test the queue with different data types (e.g., `int`, `std::string`, and `float`) and simulate enqueue and dequeue operations.

## Exercise 3: Item Comparison System
**Description**: Create a template class called `Item` that has a name (`std::string`) and a value (`T`). Implement a method to compare two items based on their values. Use `std::less` to determine which item is "smaller".  
**Objective**: Create a list of items with different value types (e.g., `int`, `double`) and demonstrate comparison using the `Item` class.

## Exercise 4: Generic Map
**Description**: Implement a template class called `Mapa` that simulates a simple dictionary. The class should allow storing key-value pairs, where the key is of type `K` and the value is of type `V`. Implement methods to add pairs, search for values by key, and list all stored keys.  
**Objective**: Test the map with different combinations of key and value types (e.g., `std::string` for the key and `int` for the value).
