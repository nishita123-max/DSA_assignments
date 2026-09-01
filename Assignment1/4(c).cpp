#include<iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int matrix[r][c];
    int transpose[c][r];

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of matrix:\n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
