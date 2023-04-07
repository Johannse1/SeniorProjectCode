#include <iostream>

int main()
{
	using std::cout;

	//2147483647 is max value for int type (4 bytes)
	int myVariable = 2147483647;

	cout << "My variable: " << myVariable + 1;
	
	return 0;
}