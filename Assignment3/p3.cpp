#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;

    cout << "Enter expression: ";
    cin >> exp;

    stack<char> s;

    for (char ch : exp) {

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {

            if (s.empty()) {
                cout << "Not Balanced";
                return 0;
            }

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                
                cout << "Not Balanced";
                return 0;
            }
        }
    }

    if (s.empty())
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}
