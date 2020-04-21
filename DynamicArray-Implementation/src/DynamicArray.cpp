#include<iostream>
#include "DynamicArray.h"


DynamicArray::DynamicArray()
{
	DynamicArray(8); // The default size of the array is set to 8
}

DynamicArray::DynamicArray(int size) {
	arraySize = size;
	// filledSize = 0;
	dynamicArray = new (int[arraySize]);

	for (int i = 0; i < arraySize; i++) {
		dynamicArray[i] = 0;
	}
}

DynamicArray::~DynamicArray()
{
	delete[] dynamicArray;
}


void DynamicArray::resize(int newSize)
{
	int *temp;
	temp = new int[newSize];
	for (int i = 0; i < (newSize); i++) {
		if (i < arraySize) {
			temp[i] = dynamicArray[i];
		}
		else {
			temp[i] = 0;
		}
	}
	delete[] dynamicArray;
	dynamicArray = temp;
	arraySize = newSize;

}

void DynamicArray::insertElement(int position, int value)
{
	if (position < arraySize) {
		dynamicArray[position] = value;
	}
	else {
		std::cout << "Dynamic array index out of bound!";
	}
}

void DynamicArray::appendElement(int value)
{
	filledSize += 1;
	if (filledSize == arraySize) {
		resize(filledSize*2);
	}
	dynamicArray[filledSize-1] = value;
}

int DynamicArray::getElement(int position)
{
	if (position < arraySize) {
		return dynamicArray[position];
	}
	else {
		std::cout << "Dynamic array index out of bound!";
		return -1;
	}
}

int DynamicArray::getArraySize()
{
	return arraySize;
}

void DynamicArray::display()
{
	for (int i = 0; i < arraySize; i++) {
		std::cout << dynamicArray[i] << "\t";
	}
	std::cout << std::endl;
}

int DynamicArray::findElement(int element) //returns first index of the element with searching value
{
	int index = -1;
	for (int i =0; i < arraySize; i++) {
		if (dynamicArray[i]==element) {
			index = i;
			break;
		}
	}
	return index;	
}

bool DynamicArray::isAvailable(int value)
{
	for (int i = 0; i < arraySize; i++) {
		if (dynamicArray[i] == value) {
			return true;
		}
	}
	return false;
}

