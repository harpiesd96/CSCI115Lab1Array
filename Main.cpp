#include <iostream>
#include "ArrayClass.h"

int main()
{
    std::cout << "Hello World!\n\n";

    Array foo(1);
    foo.InsertAtBeginning(2);
    foo.InsertAtBeginning(1);
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

    int ArraySum = 0;
    ArraySum = foo.Sum();
    std::cout << ArraySum << "\n";



    int* OddArray = foo.PointerToOddNumbers();
    //print array
    int size = 8;
    for (int i = 0; i < size - 1; i++)
    {
        std::cout << OddArray[i] << ", ";
    }
    std::cout << OddArray[size - 1];
    std::cout << ArraySum << "\n";



    /*
    Array OddArray = foo.OddNumbers();
    OddArray.Print();
    std::cout << "\n";
    */

    foo.InvertOrder();
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
• Function to Add an element at the beginning
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