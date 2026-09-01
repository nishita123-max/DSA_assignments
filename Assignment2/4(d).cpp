#include <iostream>
using namespace std;

void sortStrings(){
    int n;
    char str[50][100];
    char temp[100];

    cout << "Enter number of strings: ";
    cin >> n;

    cin.ignore();

    cout << "Enter strings:\n";

    for (int i = 0; i < n; i++) {
        cin.getline(str[i], 100);
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            int k = 0;

            while (str[j][k] != '\0' &&
                   str[j + 1][k] != '\0' &&
                   str[j][k] == str[j + 1][k]) {
                k++;
            }

            if (str[j][k] > str[j + 1][k]) {
                
                int x = 0;
                while (str[j][x] != '\0') {
                    temp[x] = str[j][x];
                    x++;
                }
                temp[x] = '\0';

                x = 0;
                while (str[j + 1][x] != '\0') {
                    str[j][x] = str[j + 1][x];
                    x++;
                }
                str[j][x] = '\0';

                x = 0;
                while (temp[x] != '\0') {
                    str[j + 1][x] = temp[x];
                    x++;
                }
                str[j + 1][x] = '\0';
            }
        }
    }

    cout << "\nStrings in alphabetical order:\n";

    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
}

int main() {
    sortStrings();

    return 0;
}
