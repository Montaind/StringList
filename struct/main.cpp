#include <iostream>
#include "List.h"
#include "Node.h"
using namespace std;


int main() {
	List<std::string> list;
	list.add("Adolf Hitler");
	list.add("Tipo Bogdan");
	list.add("Goga Boba");
	std::cout << list.getData(0);
}