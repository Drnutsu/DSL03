#include <iostream>

using namespace std;

template <typename type>
class node{
public:
	node();
	node(type);
	type data;
	node *link;
};

template <typename type>
node<type>::node(){
	cout << "cont" << endl;
	this->link = nullptr;
}

template <typename type>
node<type>::node(type input){
	this->data = input;
	this->link = nullptr;
}