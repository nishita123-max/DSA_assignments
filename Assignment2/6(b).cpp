#include<iostream>
using namespace std;



int main(){
    int rows, cols;
    cout<<"Enter the number of rows and cols : ";
    cin>>rows>>cols;
    int arr1[rows][cols];
    cout<<"Enter the elements of first matrix : "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>arr1[i][j];
        }
    }
    int arr2[rows][cols];
    cout<<"Enter the elements of second matrix : "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>arr2[i][j];
        }
    }
    int res[rows][cols];
    cout<<"Resultant matrix : "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
