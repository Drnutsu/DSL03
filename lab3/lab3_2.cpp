#include <iostream>

using namespace std;


template <typename T>
void print(T* a,int i,int lastIndex) {
	if(i <= lastIndex){
		cout << a[i] << endl;
		print(a,++i,lastIndex);
	}
}

template <typename T>
void revPrint(T* a,int i,int lastIndex){
	if(lastIndex >= i){
		cout << a[lastIndex] << endl;
		revPrint(a,i,--lastIndex);
	}
}

template <typename T>
void initArrWithInd(T* a,int i,int lastIndex) {
	if(i <= lastIndex){
		a[i] = i;
		initArrWithInd(a,i+1,lastIndex);
	}
}


/*int main() {
	int a[10] = {0};
	initArrWithInd(a,2,4);
	print(a,2,4);
	revPrint(a,2,4);
}*/