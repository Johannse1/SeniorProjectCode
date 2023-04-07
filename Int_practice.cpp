#include <iostream>

int main()
{
  	using std::cout;
	using std::endl;
  
	int goodNumber = 12;
	int tooLarge = 2147483648;

	cout << "Printing tooLarge: " << tooLarge << endl;
    cout << "Printing goodNumber: " << goodNumber;

	return 0;
}