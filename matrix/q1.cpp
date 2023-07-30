#include <iostream>
using namespace std;

void print2D(int arr[][3], int col, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void input2D(int arr[][3], int col, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void printSum(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " "; 
    }
    cout << endl;
}

int main()
{
    int arr[3][3];
    input2D(arr, 3, 3);
    print2D(arr, 3, 3);
    printSum(arr, 3, 3);
}