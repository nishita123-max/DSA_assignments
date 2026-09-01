#include<iostream>
using namespace std;

int inversionCount(int arr[], int n)
{   
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j && arr[i]>arr[j])
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<inversionCount(arr, n)<<endl;
    
    return 0;
}
