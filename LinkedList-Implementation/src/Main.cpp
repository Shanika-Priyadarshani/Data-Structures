#include"LinkedList.h"
#include <iostream>


int main() {
	LinkedList* list = new LinkedList();
	list->appendElement(2);
	list->appendElement(3);
	list->appendElement(4);
	list->appendElement(5);
	std::cout << "Display appended elements: ";
	list->display();
	list->addElementAt(0,8);
	std::cout << "Display element added at the beginning: ";
	list->display();
	list->addElementAt(5, 7);
	std::cout << "Display element added at the end: ";
	list->display();
	list->addElementAt(3, 9);
	std::cout << "Display element added at the middle: ";
	list->display();
	list->removeElementAt(0);
	std::cout << "Display element removed at the begginning: ";
	list->display();
	list->removeElementAt(6);
	std::cout << "Display element removed at the end: ";
	list->display();
	list->removeElementAt(2);
	std::cout << "Display element removed at the middle: ";
	list->display();
	list->updateElementAt(0, 1);
	std::cout << "Display element updated at the beginning: ";
	list->display();
	list->updateElementAt(3, 9);
	std::cout << "Display element updated at the end: ";
	list->display();
	list->updateElementAt(2, 5);
	std::cout << "Display element updated at the middle: ";
	list->display();
	list->empty();
	std::cout << "After Emptying the list: ";
	list->display();


	int in;
	std::cin >> in;

}
