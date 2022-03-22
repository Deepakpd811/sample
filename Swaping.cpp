#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    cout << "Before swaping a is " << a << " and b is " << b << endl;
    cout << "//////////////////////////////////////////////////" << endl;

    int temp = a;

    a = b;
    b = temp;

    cout << "After swaping a is " << a << " and b is " << b << endl;

    return 0;
}
