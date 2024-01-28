#include "List.h"

//List::List() : head(nullptr), tail(nullptr), count(0) {}
//
//List::List(Node* head, Node* tail)
//{
//}
//
//List::~List() {
//	current = head;
//	while(current)
//	{
//		next();
//		delete prev;
//	}
//}
//
//void List::add(std::string string){
//	if (!head && !tail) {
//		Node* node = new Node(string);
//		head = node;
//		tail = node;
//	}
//	else {
//		Node* node = new Node(string);
//		tail->next = node;
//		tail = node;
//	}
//	count++;
//}
//
//void List::coutEl()
//{
//	current = head;
//	for (int i = 0; i < count; i++) {
//		std::cout << current->string << "\n";
//		current = current->next;
//	}
//	
//}
//
//std::string List::get(int postition)
//{
//	Node* node = getNode(postition);
//	if (node) return node->string;
//	else return "";
//	
//}
//
//void List::del(int position)
//{
//	Node* node = getNode(position);
//	if (node == head) {
//		head = node->next;
//		delete node;
//	}
//	else if (node == tail) {
//		Node* prev = getNode(count - 1);
//		delete tail;
//		tail = prev;
//		tail->next = nullptr;
//	}
//	else {
//		Node* prev = getNode(position - 1);
//		prev->next = node->next;
//		delete node;
//	}
//	count--;
//}
//
//void List::del(std::string string)
//{
//	current = getNode(string);
//	if (current == head) {
//		head = current->next;
//		delete current;
//	}
//	else if (current == tail) {
//		delete tail;
//		tail = prev;
//		tail->next = nullptr;
//	}
//	else {
//		prev->next = current->next;
//		delete current;
//	}
//	count--;
//}
//
//int List::getPos(std::string string)
//{
//	return 0;
//}
//
//Node* List::getNode(int position)
//{
//	if (position < count) {
//		Node* current = tail;
//		for (int i = 0; i < position; i++) {
//			current = current->next;	
//		}
//		return current;
//	}
//	return nullptr;
//}
//
//Node* List::getNode(std::string string)
//{
//	Node* node = head;
//	while (node) {
//		if (node->string == string) {
//			return node;
//		}
//		node = node->next;
//	}
//	return nullptr;
//}
//
//void List::next()
//{
//	prev = current;
//	current = current->next;
//}
