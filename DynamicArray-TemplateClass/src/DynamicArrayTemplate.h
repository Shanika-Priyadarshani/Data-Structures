#pragma once
#ifndef _DYNAMICARRAYTEMPLATE_H_
#define _DYNAMICARRAYTEMPLATE_H_

template <class T>
class DynamicArray
{
public:
	 DynamicArray();
	 DynamicArray(int size);
	~DynamicArray();

	void insertElement(int position, T value); // insert a value to a given position in the array
	void appendElement(T value);//append an element to the end of the array
	T getElement(int position);
	int findElement(T value); //returns the index of the first matching element if found else return -1
	bool isAvailable(T value); //returns true if an element is there within the array
	void resize(int newSize);
	int getArraySize();
	void display();

private:
	T* dynamicArray;
	int arraySize;
	int filledSize;
};
#endif


