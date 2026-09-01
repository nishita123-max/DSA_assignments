#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int countDistinct(int arr[], int n)
{
    if(n==0)return 0;
    int count = 1;
    bubbleSort(arr, n);
    for(int i=1; i<n; i++)
    {
        if(arr[i-1] != arr[i])
        count++;
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
    cout<<countDistinct(arr,n)<<endl;
    
    return 0;
}
