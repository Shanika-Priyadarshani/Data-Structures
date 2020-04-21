#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	elementCount = 0;
}

LinkedList::~LinkedList()
{
	empty();
}

void LinkedList::appendElement(int value)
{
	Node* tmp = new Node;
	tmp->data = value;
	tmp->next = NULL;

	if (head == NULL)
	{
		head = tmp;
		tail = tmp;
	}
	else
	{
		tail->next = tmp;
		tail = tail->next;
	}
	elementCount++;
}

void LinkedList::addElementAt(int position, int value)
{
	if (position > elementCount) {
		std::cout << "Position Index Out of Range!" << std::endl;
	}
	else {
		Node* temp = new Node;

		if (position == 0) {
			temp->data = value;
			temp->next = head;
			head = temp;
		}
		else if (position == elementCount) {
			this->appendElement(value);
		}
		else {
			Node* pre = new Node;
			Node* cur = new Node;

			cur = head;
			for (int i = 0; i<position; i++)
			{
				pre = cur;
				cur = cur->next;
			}
			temp->data = value;
			pre->next = temp;
			temp->next = cur;
		}
		elementCount++;
	}
	
}

void LinkedList::removeElementAt(int position)
{
	if (position > elementCount-1) {
		std::cout << "Position Index Out of Range!" << std::endl;
	}
	else {
		if (position == 0) {
			Node* temp = new Node;
			temp = head;
			head = head->next;
			delete temp;
		}
		else if (position == elementCount-1) {
			Node* current = new Node;
			Node* previous = new Node;
			current = head;
			while (current->next != NULL)
			{
				previous = current;
				current = current->next;
			}
			tail = previous;
			previous->next = NULL;
			delete current;
		}
		else {
			Node* current = new Node;
			Node* previous = new Node;
			current = head;
			for (int i = 0; i<position; i++)
			{
				previous = current;
				current = current->next;
			}
			previous->next = current->next;
		}
		elementCount--;
	}
}

void LinkedList::updateElementAt(int position, int value)
{
	if (position >= elementCount - 1) {
		std::cout << "Position Index Out of Range!" << std::endl;
	}
	else {
		//this->removeElementAt(position);
		//this->addElementAt(position, value);
		Node* current = new Node;
		current = head;
		for (int i = 0; i < position; i++) {
			current = current->next;
		}
		current->data = value;
	}
}

/*
bool LinkedList::empty()
{
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}
*/

void LinkedList::empty()
{
	if (head != NULL) {
		Node* current = new Node;
		Node* previous = new Node;
		current = head;
		for (int i = 0; i < elementCount-1; i++) {
			previous = current;
			current = current->next;
			previous->data = NULL;
			previous->next = NULL;
		}
		head = NULL;
		tail = NULL;
	}
}

void LinkedList::display()
{
	if (head != NULL) {
		Node* temp = new Node;
		temp = head;
		while (temp != NULL)
		{
			std::cout << temp->data << "\t";
			temp = temp->next;
		}
	}
	else {
		std::cout << "NULL" ;
	}
	std::cout << std::endl;
}