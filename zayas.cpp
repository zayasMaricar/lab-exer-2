#include <iostream>
using namespace std;

void max(int a, int b){
	if (x>y)
		cout <<a<<" is greater than "<<b;
	else
		cout <<b<<" is greater than "<<a;
}

int main (){
	int a, b;
	
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	
	max(a,b);
	
	return 0;
}
