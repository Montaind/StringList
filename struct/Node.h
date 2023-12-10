#pragma once
#include <iostream>

class Node {
public:
	Node();
	Node(std::string string);
	~Node();
	Node* next;
	std::string string;
};