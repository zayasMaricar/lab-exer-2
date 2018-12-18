#include<iostream>
using namespace std;

int factorial(int a);

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    cout << "The factorial of " << a << " is " << factorial(a);

    return 0;
}

int factorial(int a)
{
    if(a > 1)
        return a * factorial(a - 1);
    else
        return 1;
}
