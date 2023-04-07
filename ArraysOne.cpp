#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	int myArray[3] = { 67, 23, 87 };

	cout << "my first element: " << myArray[0] << endl;
	cout << "my second element: " << myArray[1] << endl;
	cout << "my third element: " << myArray[2] << endl;
	cout << "\n";

	//change first element
	myArray[0] = -100;

	cout << "my first element: " << myArray[0] << endl;
	cout << "my second element: " << myArray[1] << endl;
	cout << "my third element: " << myArray[2] << endl;

	return 0;
}