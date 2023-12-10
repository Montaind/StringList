#pragma once
#include <iostream>
#include "Node.h"
class List {
public:
	List();
	~List();
	void add(std::string string);
	std::string get(int postition);
	void del(int position);
	void del(std::string string);
	int getPos(std::string string);
private:
	Node* getNode(int position);
	Node* getNode(std::string string);
private:
	Node* head;
	Node* tail;
	int count;
};