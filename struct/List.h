#pragma once
#include <iostream>
#include "Node.h"
class List {
public:
	List();
	List(Node* head, Node* tail);
	~List();
	void add(std::string string);
	void coutEl();
	std::string get(int postition);
	void del(int position);
	void del(std::string string);
	int getPos(std::string string);
private:
	Node* getNode(int position);
	Node* getNode(std::string string);

	void next();
private:
	Node* head;
	Node* tail;
	int count;

	Node* current;
	Node* prev;
};