#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter K: ";
    cin >> k;

    // k = k % n;

    for (int r = 0; r < k; r++)
    {
        int temp = arr[n - 1];

        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;

    return 0;

}
