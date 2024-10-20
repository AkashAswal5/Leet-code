#include <iostream>
#include <stack>
using namespace std;

bool isvalid(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }

        else
        {
            if (stk.empty())
            {
                return false;
            }

            char top = stk.top();
            stk.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return stk.empty();
}


int main()
{
    // check for balanced parantheses
    string s;
    cout << "ENTER THE STRING: ";
    cin >> s;

    if (isvalid(s))
    {
        cout << "valid" << endl;
    }

    else
    {
        cout << "Not Valid" << endl;
    }
    return 0;
}
