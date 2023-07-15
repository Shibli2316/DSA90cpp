// EQUIVALENT TRIANGLE

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int spaces = n - i;
        int j = 1;
        while(spaces>0){
            cout << " ";
            spaces--;
        }
        while (j<=i)
        {
            cout << 'x';
            j++;
        }
        cout << endl;
        i++;
    }
}