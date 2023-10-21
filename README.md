# Assignment 2
## Card Sorting Program

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

