#pragma once
#include <iostream>
template <typename T>
class List {
public:
	List() {
		head = nullptr;
		tail = nullptr;
	}
	~List() {
		current = head;
		while (current)
		{
			next();
			delete prev;
		}
	}

	void next()
	{
		prev = current;
		current = current->next;
	}

	void add(T data)
	{
		if (!head && !tail) {
			Node* node = new Node(data);
			head = node;
			tail = node;
		}
		else {
			Node* node = new Node(data);
			tail->next = node;
			tail = node;
		}
		count++;
	}
	void del(T data)
	{
		current = getNode(data);
		if (current == head) {
			head = current->next;
			delete current;
		}
		else if (current == tail) {
			delete tail;
			tail = prev;
			tail->next = nullptr;
		}
		else {
			prev->next = current->next;
			delete current;
		}
		count--;
	}
	void del(int position) {
		if (!head) return;
		Node* node = getNode(position);
		if (node == head) {
			head = node->next;
			delete node;
		}
		else if (node == tail) {
			Node* prev = getNode(count - 1);
			delete tail;
			tail = prev;
			tail->next = nullptr;
		}
		else {
			Node* prev = getNode(position - 1);
			prev->next = node->next;
			delete node;
		}
		count--;
	}
	void getPos(T data) {
	
	}
	T getData(int position) {
		Node* node = getNode(position);
		if (node) return node->data;
		else return "";
	}
private:
	class Node {
	public:
		Node()
		{
			data = "Null";
			next = nullptr;
		}
		Node(T data) {
			next = nullptr;
			this->data = data;
		}
		~Node() {

		}
		Node* next;
		T data;
	};
	Node* getNode(int position) {
		if (position < count) {
			Node* current = head;
			for (int i = 0; i < position; i++) {
				current = current->next;
			}
			return current;
		}
		return nullptr;
	}
 	Node* head;
	Node* current;
	Node* tail;
	int count;
	Node* prev;
};
