#include <iostream>

int main()
{
    using std ::cout;
    using std::endl;

    int variable = 0;

    do
    {
        //this code is guaranteed to execute atleast once
        cout << "Hello, I am Do-Bloack!" << endl;

    } while (variable == 5); // loop continuation condition

    cout << "Variable doesn't equal 5, ";
    cout << "so the loop didn't work, ";
    cout << "only the do-block." <<endl;

    return 0;
}