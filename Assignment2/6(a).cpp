#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter the number of rows and cols : ";
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Original matrix: "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose[rows][cols];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    cout<<"Transposed matrix : "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
