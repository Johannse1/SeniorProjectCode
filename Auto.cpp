#include <iostream>

auto autofunc1()
{
    return 777;
}

auto autofunc2()
{
    return 123.412;
}

int main()
{
    using std:: cout;
    using std:: endl;


    cout << "First auto function returned " << autofunc1() << endl;
    cout << "Second auto function returned" << autofunc2() << endl;

    return 0;
}
