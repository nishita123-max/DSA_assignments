#include <iostream>
using namespace std;

void upperToLower(){
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    cout << "Lowercase character: " << ch <<endl;
}

int main() {
    upperToLower();

    return 0;
}
