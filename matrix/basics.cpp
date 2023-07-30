#include <iostream>
using namespace std;

// void print2D(int arr[][], int col, int row){
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j];
//         }
        
//     }
    
// }

int main(){
    int arr[3][3];   

    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};

    int arr2[3][3] = {{90,80,70}, {30,40,50},{1,2,3}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j];
        }
        cout << endl;
    }
}