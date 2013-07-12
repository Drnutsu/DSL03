#include<iostream>
using namespace std;

template <typename type>
class list{
public:
	list();
	list(type);
	struct node {
		type data;
		node *link;
	}

	node *start;
	node *cursor;
};

template <typename type>
node<type>::node(){
	start = cursor = new node;
}

template <typename type>
node<type>::node(type input){
	start = cursor = new node;
	cursor->data = input;
	cutsor->link = nullptr;
}



 