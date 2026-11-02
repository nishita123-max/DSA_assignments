#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "DataStructure";

    stack<char> s;

    // Push characters into stack
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // Pop characters to reverse
    cout << "Reversed string: ";

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}
