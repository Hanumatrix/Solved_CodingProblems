#include <iostream>
using namespace std;

void sumofdigits(int num)
{
    int sum = 0;
    int lastdigit;
    while (num > 0)
    {
        lastdigit = num % 10;
        sum += lastdigit;
        num = num / 10;
    }
    cout << "the sum is: " << sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    sumofdigits(num);
    return 0;
}
