#include <iostream>
#include "List.h"
using namespace std;


int main() {
	List<std::string> list;
	/*list.add("Adolf Hitler");
	list.add("Tipo Bogdan");
	list.add("Goga Boba");*/
	list.del(0);
	std::cout << list.getData(0);
}