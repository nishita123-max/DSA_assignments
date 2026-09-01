#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of matrix(n*n) : ";
    cin>>n;
    int size = (3*n)-2; //number of non-zero elements
    int a[size];
    cout<<"Enter the elements (3*n)-2 : ";
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    int curr=0;
    cout<<"Matrix: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if( ( (i-j)==1) || ( (j-i)==1) || (i==j))
            {
                cout<<a[curr]<<" ";
                curr++;
            }
            else
            cout<<"0"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
