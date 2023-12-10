#include "Node.h"

Node::Node() : string("Null"), next(nullptr){}

Node::Node(std::string string) : next(nullptr), string(string) {}

Node::~Node() {}
