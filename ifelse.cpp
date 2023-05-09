#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    int var = 13;

    /*If my variable equals 13,
    then print "OKAY", and 
    change variable to 15*/

    if (var ==13)
    {
        cout << "13 == 13, it is OKAY" << endl;
        var = 15;
    }
    /* New value of variable (15) doesn't equal 13,
    then print "NOT OKAY" */

    if (var != 13)
    {
        cout << "15 != 13, it is NOT OKAY" << endl;
    }

    return 0;
}