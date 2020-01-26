#include "ArrayClass.h"
#include <iostream>
#include <algorithm>

//default constructor (delegates to custom constructor, creates array of default_size elements)
Array::Array() : Array(default_size)
{
}

//constructor
Array::Array(int size)
{
	array = new int[size];
	Array::size = size;
	//zero out the array
	std::fill(array, array+size, 0);
}

//copy constructor
Array::Array(Array &rhs)
{
	size = rhs.GetSize();
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rhs.array[i];
	}
}

//default destructor
Array::~Array()
{
	delete[] array;
}

//returns array size
int Array::GetSize()
{
	return size;
}

//display array
void Array::Print()
{
	for(int i = 0; i < size-1; i++)
	{
		std::cout << array[i] << ", ";
	}
	std::cout << array[size-1];
}

//inserts input at beginning of array
void Array::InsertAtBeginning(int input)
{
	//create a new array of size 1 bigger
	size++;
	int* NewArray = new int[size];
	//copy elements of old array into last elements of new array
	for (int i = 1; i < size; i++)
	{
		NewArray[i] = array[i - 1];
	}
	//insert desired data into first element of new array
	NewArray[0] = input;
	//move pointers
	delete[] array; //sends old data to void
	array = NewArray; //points variable to new data
}

//inserts input at end of array
void Array::InsertAtEnd(int input)
{
	//create a new array of size 1 bigger
	size++;
	int* NewArray = new int[size];
	//copy elements of old array into first elements of new array
	for (int i = 0; i < size-1; i++)
	{
		NewArray[i] = array[i];
	}
	//insert desired data into last element of new array
	NewArray[size-1] = input;
	//move pointers
	delete[] array; //sends old data to void
	array = NewArray; //points variable to new data
}

//removes first element of array
void Array::RemoveFirst()
{
	//create a new array of size 1 smaller
	size--;
	int* NewArray = new int[size];
	//copy elements of old array (except first) into new array
	for (int i = 1; i < size+1; i++)
	{
		NewArray[i-1] = array[i];
	}
	//move pointers
	delete[] array; //sends old data to void
	array = NewArray; //points variable to new data
}

//removes last element of array
void Array::RemoveLast()
{
	//create a new array of size 1 smaller
	size--;
	int* NewArray = new int[size];
	//copy elements of old array (except last) into new array
	for (int i = 0; i < size; i++)
	{
		NewArray[i] = array[i];
	}
	//move pointers
	delete[] array; //sends old data to void
	array = NewArray; //points variable to new data
}

//inverts the order of array's elements
void Array::InvertOrder()
{
	//create container
	int* temp = new int[size];
	//reverse order of array elements into container
	for (int i = 0; i < size; i++)
	{
		temp[size-1-i] = array[i];
	}
	//export
	delete[] array;
	array = temp;
}

//returns the sum of array's elements
int Array::Sum()
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

//returns pointer to array containing only the array's odd elements
int* Array::PointerToOddNumbers()
{
	int NumberOfOddElements = 0;
	//determine amount of odd elements
	for (int i = 0; i < size; i++)
	{
		// if the element is odd
		if (array[i]%2 == 1)
		{
			//increment counter
			NumberOfOddElements++;
		}
	}
	//create array
	int* OddArray = new int[NumberOfOddElements];
	//fill array with the odd numbers
	int j = 0;
	for (int i = 0; i < size && j < NumberOfOddElements; i++)
	{
		// if the element is odd
		if (array[i] % 2 == 1)
		{
			//insert into array
			OddArray[j] = array[i];
			j++;
		}
	}
	return OddArray;
}

//returns array containing only the array's odd elements
Array Array::OddNumbers()
{
	int NumberOfOddElements = 0;
	//determine amount of odd elements
	for (int i = 0; i < size; i++)
	{
		// if the element is odd
		if (array[i] % 2 == 1)
		{
			//increment counter
			NumberOfOddElements++;
		}
	}
	//create array
	Array OddArray(NumberOfOddElements);
	//fill array with the odd numbers
	int j = 0;
	for (int i = 0; i < size && j < NumberOfOddElements; i++)
	{
		// if the element is odd
		if (array[i] % 2 == 1)
		{
			//insert into array
			OddArray.InsertAtEnd(array[i]);
			j++;
		}
	}
	return OddArray;
}

