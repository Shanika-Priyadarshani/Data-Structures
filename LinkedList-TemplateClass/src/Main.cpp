#include "LinkedListTemplate.h"
#include "LinkedListTemplate.cpp"
#include <iostream>

int main() {

	LinkedList<char> list ;
	list.appendElement('a');
	list.appendElement('b');
	list.appendElement('c');
	list.appendElement('d');
	std::cout << "Display appended elements: ";
	list.display();
	list.addElementAt(0, 'e');
	std::cout << "Display element added at the beginning: ";
	list.display();
	list.addElementAt(5, 'f');
	std::cout << "Display element added at the end: ";
	list.display();
	list.addElementAt(3, 'g');
	std::cout << "Display element added at the middle: ";
	list.display();
	list.removeElementAt(0);
	std::cout << "Display element removed at the begginning: ";
	list.display();
	list.removeElementAt(6);
	std::cout << "Display element removed at the end: ";
	list.display();
	list.removeElementAt(2);
	std::cout << "Display element removed at the middle: ";
	list.display();
	list.updateElementAt(0, 'x');
	std::cout << "Display element updated at the beginning: ";
	list.display();
	list.updateElementAt(3, 'y');
	std::cout << "Display element updated at the end: ";
	list.display();
	list.updateElementAt(2, 'z');
	std::cout << "Display element updated at the middle: ";
	list.display();
	list.empty();
	std::cout << "After Emptying the list: ";
	list.display();

	int in;
	std::cin >> in;
	return 0;
}