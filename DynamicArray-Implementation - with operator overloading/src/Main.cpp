#include"DynamicArray.h"
#include <iostream>


int main() {

	DynamicArray dArray = DynamicArray(5);
	std::cout << "Original array after initializing: " << std::endl;
	dArray.display();

	dArray.appendElement(1);
	dArray.appendElement(2);
	dArray.appendElement(3);
	std::cout <<"Array after appending Elements: "<< std::endl;
	dArray.display();

	dArray.insertElement(3,4);
	std::cout << "Array after inserting Elements: " <<std::endl;
	dArray.display();

	std::cout << "Display Element: " << dArray.getElement(3)<< std::endl;
	
	std::cout << "original array size: " << dArray.getArraySize() << std::endl;
	dArray.resize(8);
	std::cout << "Array size after resizing: " << dArray.getArraySize() << std::endl;
	dArray.display();

	std::cout << "Find index of value 3 in array: " << dArray.findElement(3) << std::endl;
	std::cout << "Find index of value 30 in array: " << dArray.findElement(30) << std::endl;

	std::cout << "Check whether value 2 is in the element or not: " << dArray.isAvailable(2) << std::endl;
	

	int in;
	std::cin >> in;

}