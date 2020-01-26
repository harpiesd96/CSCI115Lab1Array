#include "ArrayClass.h"
#include <iostream>
#include <algorithm>

//default constructor (delegates to custom constructor with 128 elements)
Array::Array() : Array(128)
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
	delete []array;
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
	
}

//removes last element of array
void Array::RemoveLast()
{

}

//inverts the order of array's elements
void Array::InvertOrder()
{

}

//returns the sum of array's elements
int Array::Sum()
{
	return 0;
}

//returns pointer to array containing only the array's odd elements
int* Array::OddNumbers()
{
	return nullptr;
}

