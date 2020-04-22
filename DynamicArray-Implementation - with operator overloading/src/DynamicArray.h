#pragma once

class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();

	void insertElement(int position,int value); // insert a value to a given position in the array
	void appendElement(int value);//append an element to the end of the array
	int getElement(int position);
	int findElement(int value); //returns the index of the first matching element if found else return -1
	bool isAvailable(int value); //returns true if an element is there within the array
	void resize(int newSize);
	int getArraySize();
	void display();
	int& operator[](int);
	
private:
	int* dynamicArray;
	int arraySize;
	int filledSize;
};



