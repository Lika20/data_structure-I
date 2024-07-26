## Assignment 2 | Card Sorting Program

This is a C++ program that demonstrates the creation, shuffling, and sorting of a deck of 52 playing cards. The program creates an array of Card objects, shuffles them using the Fisher-Yates Algorithm, and then sorts the cards by value and suit using both the merge sort and quicksort algorithms.

### Card Class

The Card class represents a playing card and has two fields:

Front: A string representing the card's face value ('2' to '10', 'J', 'Q', 'K', 'A').
Deck: A string representing the card's suit ('H' for Hearts, 'D' for Diamonds, 'C' for Clubs, 'S' for Spades).

### Sorting Algorithms

The program implements two sorting algorithms:

- Merge Sort: Used to sort the cards by value.
- Quicksort: Used to sort the cards by suit and value.

### How to Run the Program

To run the program, compile the A2.cpp file and execute the compiled binary.

g++ A2.cpp -o CardSortingProgram
./CardSortingProgram

### Output

Unsorted Array of Cards: Displays the initial array of cards before shuffling.
Sorted by Value: Displays the array of cards sorted by face value.
Sorted by Suit and Value: Displays the array of cards sorted by suit and face value.
Implementation Details

The program uses the Fisher-Yates Algorithm to shuffle the array of cards.
Sorting by value is done using a bubble sort implementation.
Sorting by suit and value is done using an insertion sort implementation.




## Assignment 4 DATA Structure I course | Hurricane List Doubly Linked List Implementation

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
