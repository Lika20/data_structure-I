# Assignment 4 

## Hurricane List Doubly Linked List Implementation

This repository contains an implementation of a doubly linked list for storing information about hurricanes or tropical storms. The program allows users to create a list of storms, each represented by a Storm object, and provides functionalities to add storms to the list, print storm information from head to tail, and print storm information from tail to head.

### Requirements

C++ Compiler
### Usage

To use the program, follow these steps:

Clone the repository to your local machine:
#### git clone https://github.com/your-username/hurricane-list.git

Navigate to the project directory:
#### cd hurricane-list
Compile the source code:
#### g++ -o main Assignment4.cpp

Run the compiled program:
#### ./main
The program will create a list of storms and print their information in the specified format. You can modify the main function in 'Assignment4.cpp' to add storms of your choice.

### Implementation Details

- Node: Represents a node in the doubly linked list. Each node contains a Storm object and pointers to the next and previous nodes.
- Storm: Represents information about a hurricane or tropical storm, including name, maximum wind speed, month formed, and category.
- HurricaneList: Represents the doubly linked list. Provides methods to add storms to the list (push_back and insert), print storm information from head to tail (print), and print storm information from tail to head (printReverse).
