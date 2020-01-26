#include <iostream>
#include "ArrayClass.h"

int main()
{
    std::cout << "Hello World!\n\n";

    Array foo(3);
    foo.array[0] = 1;
    foo.array[1] = 2;
    foo.Print();
    std::cout << "\n";

    foo.InsertAtBeginning(10);
    foo.Print();
    std::cout << "\n";

    foo.InsertAtEnd(20);
    foo.Print();
    std::cout << "\n";

    foo.RemoveFirst();
    foo.Print();
    std::cout << "\n";

    foo.RemoveLast();
    foo.Print();
    std::cout << "\n";
 }

/*

Create an “Array” class addressing following functionality
• Default Constructor for the class
    • Constructor with array size
    • Copy Constructor with size
• Destructor for the class
• Function to access the size
• Display the content of the array
• Function to  Add an  element at the beginning
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