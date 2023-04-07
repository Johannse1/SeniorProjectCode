#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	//change name of double type to MY_NEW_TYPE
	typedef double MY_NEW_TYPE;

	MY_NEW_TYPE myVar = 64.565;

	cout << "Value of myVar: " << myVar << endl;

	// double type takes 8 bytes
	cout << "Size of myVar : " << sizeof(myVar) << endl;

	return 0;
}