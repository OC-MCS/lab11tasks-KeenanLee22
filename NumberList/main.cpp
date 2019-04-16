#include <iostream>
#include "NumberList.h"
#include <fstream>
using namespace std;

int main()
{
	NumberList list;
	//list.insertNode(10);
	//list.appendNode(40);
	//list.insertNode(30);
	//list.insertNode(25);
	//list.deleteNode(30);
	//list.displayList();
	fstream inFile;
	inFile.open("Integers.txt");
	int tempInt;
	while (inFile >> tempInt)
	{
		list.insertNode(tempInt);
	}
	inFile.close();
	list.displayList();
	return 0;
}