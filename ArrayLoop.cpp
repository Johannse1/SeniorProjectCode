#include <iostream>

int main()
{
    using std:: cout;
    

    int array[10]; //create an array of 10 elements

    for (int i = 0; i != 10; i++)
    {
        array [i] = i; // array element initialization
    }

    cout << "[ ";
    
    for (int i = 0; i!= 10; i++) //loop to display array
    {

        cout << array[i] << " "; //display element of array
    }

    cout << "]";

    return 0;

}