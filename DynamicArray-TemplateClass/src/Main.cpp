
#include"DynamicArrayTemplate.h"
#include"DynamicArrayTemplate.cpp"
#include <iostream>


int main() {

	DynamicArray<char> dArray = DynamicArray<char>(5);
	std::cout << "Original array after initializing: " << std::endl;
	dArray.display();

	dArray.appendElement('a');
	dArray.appendElement('b');
	dArray.appendElement('c');
	std::cout << "Array after appending Elements: " << std::endl;
	dArray.display();

	dArray.insertElement(3, 'd');
	std::cout << "Array after inserting Elements: " << std::endl;
	dArray.display();

	std::cout << "Display Element: " << dArray.getElement(3) << std::endl;

	std::cout << "original array size: " << dArray.getArraySize() << std::endl;
	dArray.resize(8);
	std::cout << "Array size after resizing: " << dArray.getArraySize() << std::endl;
	dArray.display();

	std::cout << "Find index of value a in array: " << dArray.findElement('a') << std::endl;
	std::cout << "Find index of value r in array: " << dArray.findElement('r') << std::endl;

	std::cout << "Check whether value b is in the element or not: " << dArray.isAvailable('b') << std::endl;


	int in;
	std::cin >> in;

}
