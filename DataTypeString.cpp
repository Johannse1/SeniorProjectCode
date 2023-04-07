#include <iostream>
#include <string>

int main()
{
  	using std::cout;
	using std::endl;
	using std::string; 

	string var1 = "Hello "; //space is also a symbol
	string var2 = "World";

	//displaying the sum of string variables
	cout << var1 + var2 << endl; // concatenation

    string name = "Evan";
    cout << name.length();

	return 0;
}