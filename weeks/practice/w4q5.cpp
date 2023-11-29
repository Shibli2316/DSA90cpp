#include <iostream>
using namespace std;

void prime(int n)
{
    int divisible = 0;
    if (n == 1 || n == 0)
    {
        cout << n << " is neither prime nor not prime" << endl;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                divisible++;
            }
        }
        if (divisible > 0)
        {
            cout << n << " is not a prime number" << endl;
        }
        else
        {
            cout << n << " is a prime number" << endl;
        }
    }
}

int main()
{
    cout << "Enter the number: " << endl;
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        prime(i);
    }
}