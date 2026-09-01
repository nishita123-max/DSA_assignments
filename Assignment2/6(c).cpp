#include<iostream>
using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;
    cout<<"Enter the number of rows and cols of first matrix: ";
    cin>>rows1>>cols1;
    cout<<"Enter the number of rows and cols of first matrix: ";
    cin>>rows2>>cols2;
    int arr1[rows1][cols1];
    if(rows1 != cols2){
        cout<<"Error! two matrices cannot be multiplied!";
        return 0;
    }
    cout<<"Enter the elements of first matrix : "<<endl;
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols1; j++)
        {
            cin>>arr1[i][j];
        }
    }
    int arr2[rows2][cols2];
    cout<<"Enter the elements of second matrix : "<<endl;
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            cin>>arr2[i][j];
        }
    }
    int product[rows1][cols2];
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            product[i][j] = 0;
        }
    }
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            for(int k=0; k<rows1; k++)
            {
                product[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout<<"Resultant matrix : "<<endl;
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
