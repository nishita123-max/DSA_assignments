#include<iostream>
using namespace std;

int missingNumberLS(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] != (i+1))
        return i+1;
    }
    return n;
}

int missingNumberBS(int arr[], int n)
{
    int low = 0;
    int high = n-2;
    // int mid = (low+high)/2;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == mid+1)
            low = mid+1;
        else 
            high = mid-1;
    }
    return low+1;
}

int main()
{
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n-1];
    // cout<<"Enter the elements from 1 to n(except one number) : ";
    // for(int i=0; i<n-1; i++)
    //     cin>>arr[i];

    // int result = missingNumberLS(arr, n);
    // cout<<result<<endl;



    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements from 1 to n(except one number) : ";
    for(int i=0; i<n-1; i++)
        cin>>arr[i];

    int result = missingNumberBS(arr, n);
    cout<<result<<endl;

    



    return 0;
}
