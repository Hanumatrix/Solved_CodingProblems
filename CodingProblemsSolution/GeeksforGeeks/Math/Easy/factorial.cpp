#include <iostream>
using namespace std;

void factorial(int num)
{
    int fact = 1;
    int i = 1;
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    cout << "The factorial is: " << fact;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    factorial(num);
}