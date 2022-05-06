#include <iostream>
#include <string>

using namespace std;

string reverse(string s)
{
    string result;
    for(int i = 0; i < s.length(); ++i)
    {
        result += s[s.length() - i -1];
    }
    return result;
}

int main() 
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Reverse of \"" << s << "\" is \"" << reverse(s) << "\"" << endl;

    cout << "\nEnter a second string: ";
    getline(cin, s);
    cout << "Reverse of \"" << s << "\" is \"" << reverse(s) << "\"" << endl;

    cout << "\nEnter a third string: ";
    getline (cin, s);
    cout << "Reverse of \"" << s << "\" is \"" << reverse(s) << "\"" << endl;
    return 0;
}