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
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    vector<int> ans;
    for(int col = 0; col < mCols; col++)
    {
        if(col&1){
            // odd index bottom to top
            for(int row = nRows-1; row>=0; row--){
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // 0 or even index
            for(int row = 0; row < nRows; row++){
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main()
{
    int arr[3][3];
    input2D(arr, 3, 3);
    print2D(arr, 3, 3);
}