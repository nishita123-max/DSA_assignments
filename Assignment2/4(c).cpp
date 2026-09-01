#include <iostream>
using namespace std;

void deleteVowels(){
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "String after deleting vowels: ";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            cout << str[i];
        }
    }
    cout<<endl;
}

int main() {
    deleteVowels();

    return 0;
}
