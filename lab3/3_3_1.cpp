#include <iostream>
#include "node.h"
using namespace std;

template <typename type>
void print(node<type> *input){
	if(input != nullptr){
		cout << input->data << endl;
		print(input->link);
	}
}

template <typename type>
void revPrint(node<type> *input){
	if(input != nullptr){
		revPrint(input->link);
		cout << input->data << endl;
	}
}

/*int main() { 
	node<int> *h, *p, *t;
	h = t = new node<int>(1);
	for(int i=2; i<=4; i++)
	{
		p = new node<int>(i);
		t->link = p;
		t = p;
	}
	cout << endl;
	cout << "print: ";
	print(h);
	revPrint(h);
	cout << "\nrevPrint: ";
	return 0;
}*/