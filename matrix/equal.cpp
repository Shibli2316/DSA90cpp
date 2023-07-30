#include <iostream>
using namespace std;

void print2D(int arr[][3], int col, int row){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void input2D(int arr[][3], int col, int row){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

bool isPresent(int arr[][3], int target, int row, int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3];   

    input2D(arr, 3, 3);
    print2D(arr, 3, 3);
    cout << isPresent(arr, 2, 3, 3);
}