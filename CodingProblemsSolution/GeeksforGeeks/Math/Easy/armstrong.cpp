#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// vs code
void prime(int num)
{

    int original = num;
    int temp = num;
    int count = 0;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, count);
        num = num / 10;
    }

    if (sum == original)
    {
        cout << original << " is an armstrong number." << endl;
    }
    else
    {
        cout << original << " is not an armstrong number." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    prime(num);

    return 0;
}

// mine geeksforgeeks code
class Solution
{
public:
    bool armstrongNumber(int n)
    {
        // code here
        int original = n;
        int temp = n;
        int count = 0;

        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        int sum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            sum += pow(digit, count);
            n = n / 10;
        }
        if (sum == original)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};