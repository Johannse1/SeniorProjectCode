#include <iostream>

int FarenheightToCelsius(int degree)
{
    int celsius = (degree - 32)/1.8;
    return celsius;
}

int main()
{
    using std:: cout;
    using std:: endl;

    int fahr = 80;

    cout << fahr << " F" << " = " << FarenheightToCelsius(fahr) << " C" << endl;

    return 0;
}