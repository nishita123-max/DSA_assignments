#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of matrix (n x n): ";
    cin >> n;
    int size = (n * (n + 1)) / 2;
    int a[size];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "\nSymmetric Matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i >= j)
            {
                int index = (i * (i + 1)) / 2 + j;
                cout << a[index] << " ";
            }
            else
            {
                int index = (j * (j + 1)) / 2 + i;
                cout << a[index] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
