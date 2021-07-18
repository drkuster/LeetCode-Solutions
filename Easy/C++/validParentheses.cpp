#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    if(s.length() % 2 == 0) {
        stack <char> closeParen;
        for (int i = 0; i < s.length(); i++) {
            switch(s.at(i)) {
                case '{':
                    closeParen.push('}');
                    break;
                case '[':
                    closeParen.push(']');
                    break;
                case '(':
                    closeParen.push(')');
                    break;
                default:
                    if (closeParen.size() == 0) {
                        return false;
                    }
                    else {
                        if (closeParen.top() != s.at(i)) {
                            return false;
                        }
                        closeParen.pop();
                    }
            }
        }
        return closeParen.size() == 0;
    }
    return false;
}

int main() {
    // cout << isValid("{[()]}") << endl;
    cout << isValid("()") << endl;
    
    return 0;
}