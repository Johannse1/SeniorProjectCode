#include <iostream>

int main()
{
    
    using namespace std; // use of all space

    cout << "Hello, it's standart (std) namespace!" << endl;

    // The first way, included at the top and only need to type once
    using std::cout;
    using std::endl;

    cout << "Hello, it's standart (std) namespace!" << endl;

    // The second way, used and typed each time we need them (more work)
    std::cout << "Hello, it's standart (std) namespace!" << std::endl;
    return 0;
    // All these different ways produce the same output!
}

