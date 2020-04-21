#pragma once
#ifndef _LINKEDLISTTEMPLATE_H_
#define _LINKEDLISTTEMPLATE_H_

template <class T>
class LinkedList {

	struct Node {
		T data;
		Node* next;
	};

public:
	LinkedList();
	~LinkedList();
	void appendElement(T value); // This adds the elements to the end of the linked list
	void addElementAt(int position, T value);
	void removeElementAt(int position);
	void updateElementAt(int position, T value);
	// bool empty(); // Say whether the linked list is empty or not
	void empty(); // empty the whole linked list
	void display();

private:
	Node* head;
	Node* tail;
	int elementCount;
};
#endif


