#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	auto myVar = 64.565;

	cout << "Value of myVar : " << myVar << endl;

	// double type takes 8 bytes
	cout << "Size of myVar : " << sizeof(myVar) << endl;

	return 0;
}