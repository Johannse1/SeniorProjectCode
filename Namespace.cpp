#include <iostream>

using namespace std;

namespace myNamespace
{
    void someFunction() // this is the name of my function
    {
        cout << "This is my function!" << endl;
    }
}

namespace myColleagues_Namespace
{
    void someFunction() // this is the name of my colleague's function
    {
        cout << "This is my colleagues function!" << endl;
    }
}

int main()
{
    using namespace myNamespace;

    someFunction(); // calling my function

    return 0;
}
