#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of non-zero elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Matrix : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            cout<<a[i]<<" ";
            else
            cout<<"0"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
