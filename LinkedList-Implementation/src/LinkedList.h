#pragma once

// This Linked List class is only for integers
struct Node
{
	int data;
	Node* next;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void appendElement(int value); // This adds the elements to the end of the linked list
	void addElementAt(int position, int value);
	void removeElementAt(int position);
	void updateElementAt(int position, int value);
	// bool empty(); // Say whether the linked list is empty or not
	void empty(); // empty the whole linked list
	void display();

private:
	Node* head;
	Node* tail;
	int elementCount;
};


