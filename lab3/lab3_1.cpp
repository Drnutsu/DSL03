#include <iostream>
#include <string>

using namespace std;

int multi(int a,int b){
	if(b == 0)return 0;
	if(b != 1) return a + multi(a,b-1);
	else return a;
}

/*int main() {
	int input;
	cin >> input;
	cout << multi(1,input);

}*/