#pragma once

class Array
{
private:
    //array
    int* array;

    //array size
    int size;

    //default array size
    static constexpr int default_size = 128;

public:
    //default constructor (128 elements)
    Array();

    //constructor
    Array(int size);

    //copy constructor
    Array(const Array &rhs);

    //default destructor
    ~Array();


    //returns array size
    int GetSize() const;

    //display array
    void Print();

    //inserts input at beginning of array
    void InsertAtBeginning(int input);

    //inserts input at end of array
    void InsertAtEnd(int input);

    //removes first element of array
    void RemoveFirst();

    //removes last element of array
    void RemoveLast();

    //inverts the order of array's elements
    void InvertOrder();

    //returns the sum of array's elements
    int Sum();

    /*
    //returns pointer to array containing only the array's odd elements
    int* PointerToOddNumbers();
    */

    //returns array class containing only the array's odd elements
    Array OddNumbers();
};

/*

Create an “Array” class addressing following functionality
• Default Constructor for the class
    • Constructor with array size
    • Copy Constructor with size
• Destructor for the class
• Function to access the size
• Display the content of the array
• Function to Add an  element at the beginning
• Function to Add an element at the end
• Function to Remove an element at the beginning
• Function to Remove an element at the end
• Function to Inverse the order of the elements in the array
• Function to Return the sum of the elements in the array
• Function to Return an array that contains the odd numbers only

IGNORE:
• Function to Display the content of the array in a file through fstream
• Overload the + operator so you can concatenate 2 arrays of size n and m into a new array of size n+m Annotations

*/