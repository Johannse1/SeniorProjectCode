#include<iostream>

int main()
{
	using std::cout;
	using std::endl;

	//x + y = result

	int x = 0; //root of equation
	int y = 8;
	int result = 1000;

	//increase x, until it satisfies the equation
	while (y + x != result)
	{
		x += 1; //x = x + 1
	}

	cout << "Root of the equation: " << x;
	return 0;
}