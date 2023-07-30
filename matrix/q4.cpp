#include <iostream>
#include <vector>
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
vector<int> spiralOrder(vector<vector<int>> arr, int nRows, int mCols){
    
}

int main()
{
    int arr[3][3];
    input2D(arr, 3, 3);
    print2D(arr, 3, 3);
}