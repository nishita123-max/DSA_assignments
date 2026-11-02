#include <iostream>
#include <stack>
using namespace std;

string evaluatePostfix(string s)
{
    stack<string> st;
    string ans;

    for (char ch : s)
    {
        if (isalpha(ch))
        {
            st.push(string(1,ch));
        }

        else
        {   
            string val2 = st.top();
            st.pop();
            string val1 = st.top();
            st.pop();

            st.push("(" + val1 + ch + val2 + ")");
        }
    }

    return st.top();
}

int main()
{
    string s;
    cout << "Enter the postfix expression: ";
    cin >> s;

    string ev = evaluatePostfix(s);
    cout << "Evaluated expression: " << ev << endl;

    return 0;
}
