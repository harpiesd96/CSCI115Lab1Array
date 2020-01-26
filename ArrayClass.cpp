#include "ArrayClass.h"
#include <iostream>

//default constructor (128 elements)
Array::Array()
{
	array = new int[128];
	size = 128;
	//zero out the array
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
	}
}

//constructor
Array::Array(int size)
{
	array = new int[size];
	Array::size = size;
	//zero out the array
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
	}
}

//copy constructor
/*
Array::Array()
{

}*/

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

}

//inserts input at end of array
void Array::InsertAtEnd(int input)
{

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

