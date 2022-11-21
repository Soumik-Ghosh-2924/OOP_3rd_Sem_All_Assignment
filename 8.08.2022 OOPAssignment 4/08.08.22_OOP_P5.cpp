#include <iostream>
using namespace std;

int cpow(int, int);

int main()
{
    int base, power, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power to base: ";
    cin >> power;

    result = cpow(base, power);
    cout << base << "^" << power<< " = " << result;

    return 0;
}

int cpow(int base, int power)
{
    if (power != 0)
        return (base*cpow(base, power-1));
    else
        return 1;
}
