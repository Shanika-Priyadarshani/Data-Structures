#include<iostream>
#include "DynamicArrayTemplate.h"

template <class T>
DynamicArray<T>::DynamicArray()
{
	DynamicArray(8);
}

template <class T>
DynamicArray<T>::DynamicArray(int size) {
	arraySize = size;
	filledSize = 0;
	dynamicArray = new (T[arraySize]);

	for (int i = 0; i < arraySize; i++) {
		dynamicArray[i] = 0;
	}
}

template <class T>
DynamicArray<T>::~DynamicArray<T>()
{
	delete[] dynamicArray;
}


template <class T>
void DynamicArray<T>::resize(int newSize)
{
	T *temp;
	
	temp = new (T[newSize]);
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


template <class T>
void DynamicArray<T>::insertElement(int position, T value)
{
	if (position < arraySize) {
		dynamicArray[position] = value;
	}
	else {
		std::cout << "Dynamic array index out of bound!";
	}
}


template <class T>
void DynamicArray<T>::appendElement(T value)
{
	filledSize += 1;
	if (filledSize == arraySize) {
		resize(filledSize * 2);
	}
	dynamicArray[filledSize - 1] = value;
}


template <class T>
T DynamicArray<T>::getElement(int position)
{
	if (position < arraySize) {
		return dynamicArray[position];
	}
	else {
		std::cout << "Dynamic array index out of bound!";
		return -1;
	}
}


template <class T>
int DynamicArray<T>::getArraySize()
{
	return arraySize;
}


template <class T>
void DynamicArray<T>::display()
{
	for (int i = 0; i < arraySize; i++) {
		std::cout << dynamicArray[i] << "\t";
	}
	std::cout << std::endl;
}


template <class T>
int DynamicArray<T>::findElement(T element)
{
	int index = -1;
	for (int i = 0; i < arraySize; i++) {
		if (dynamicArray[i] == element) {
			index = i;
			break;
		}
	}
	return index;
}


template <class T>
bool DynamicArray<T>::isAvailable(T value)
{
	for (int i = 0; i < arraySize; i++) {
		if (dynamicArray[i] == value) {
			return true;
		}
	}
	return false;
}

