#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int main()
{
    int randNum1, randNum2;
    int userTotal, compTotal;

    // get the system time
    int seed = time(0);

    //seed into random number generater
    srand(seed);

    randNum1 = 1 + rand() % 100;
    randNum2 = 1 + rand() % 100;

    compTotal = randNum1 + randNum2;

    cout<< setw(5) << randNum1 << endl;
    cout << setw(3) << "+" << randNum2 << endl;
    cout << "----\n";
    cin >> userTotal;

    if (userTotal == compTotal)
        cout << "\nGreat Job!\n";
    else
        cout << "\nSorry, wrong answer, Correct answer is " << compTotal << endl;



    return 0;
}