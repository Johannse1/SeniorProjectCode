#include <iostream>

int main()
{
    using std:: cout;
    using std:: endl;

    int variable = 5;

    switch (variable)
    {
    case 5: // if the variable equals 5
        cout << "Value of the variable equals 5" << endl;
        break; 

    case 20: // if the variable equals 20
        cout << "Value of the variable equals 5" << endl;
        break; // always remember to use breaks when working with switch case, otherwise the program will execute every case until the exit code at the end.
    }

    return 0;
}