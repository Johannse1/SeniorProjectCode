#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	int myVar1;
	char myVar2;

	//using sizeof to our variables
	cout << "Size of int: " << sizeof(myVar1) << endl;
	cout << "Size of char: " << sizeof(myVar2) << endl;

	return 0;
}