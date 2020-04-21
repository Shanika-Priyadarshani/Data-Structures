#include<iostream>
#include"LinkedListTemplate.h"

template <class T>
	LinkedList<T>::LinkedList()
	{
		head = NULL;
		tail = NULL;
		elementCount = 0;
	}
template <class T>
	LinkedList<T>::~LinkedList()
	{
		empty();
	}

template <class T>
	void LinkedList<T>::appendElement(T value)
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

template <class T>
	void LinkedList<T>::addElementAt(int position, T value)
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

template <class T>
	void LinkedList<T>::removeElementAt(int position)
	{
		if (position > elementCount - 1) {
			std::cout << "Position Index Out of Range!" << std::endl;
		}
		else {
			if (position == 0) {
				Node* temp = new Node;
				temp = head;
				head = head->next;
				delete temp;
			}
			else if (position == elementCount - 1) {
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

template <class T>
	void LinkedList<T>::updateElementAt(int position, T value)
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
	template <class T>
	bool LinkedList<T>::empty() // Say whether the linked list is empty or not
	{
	if (head == NULL) {
	return true;
	}
	else {
	return false;
	}
	}
	*/

template <class T>
	void LinkedList<T>::empty() // empty the whole linked list
	{
		if (head != NULL) {
			Node* current = new Node;
			Node* previous = new Node;
			current = head;
			for (int i = 0; i < elementCount - 1; i++) {
				previous = current;
				current = current->next;
				previous->data = NULL;
				previous->next = NULL;
			}
			head = NULL;
			tail = NULL;
		}
	}

template <class T>
	void LinkedList<T>::display()
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
			std::cout << "NULL";
		}
		std::cout << std::endl;
	}