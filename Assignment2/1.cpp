#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    // int n, key;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the elements in a sorted way : ";
    // for(int i=0; i<n; i++)
    //     cin>>arr[i];
    // cout<<"Enter element to found: ";
    // cin>>key;

    // int result = binarySearch(arr, n, key);
    // if(result == -1)
    //     cout<<"Element not found"<<endl;
    // else
    //     cout<<"Element found at "<<result+1<<" position"<<endl;



    int n, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter element to found: ";
    cin>>key;
    
    int result = linearSearch(arr, n, key);
    if(result == -1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at "<<result+1<<" position"<<endl;


    

    return 0;
}
