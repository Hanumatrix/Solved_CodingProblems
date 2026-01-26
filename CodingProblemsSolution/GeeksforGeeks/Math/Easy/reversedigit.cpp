#include <iostream>
using namespace std;

void reversedigit(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout << "The reverse number is: " << reverse;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    reversedigit(num);
    return 0;
}