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

template <typename type>
void createListWithNodeNo(node<type> *start,int value,int last){
	if(value != last+1){
		node<type> *cursor = new node<int>(value);
		start->link = cursor;
		createListWithNodeNo(start->link,++value,last);
	}
}
/*int main(){
	node<int> *h;
	h = new node<int>(1);
	createListWithNodeNo(h,2,5);
	cout << endl; cout << "print: ";
	print(h);
	cout << "\nrevPrint: ";
	revPrint(h);
	return 0;
}*/