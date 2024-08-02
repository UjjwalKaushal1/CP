#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string t;
    for(int i = s.size() - 1; i>=0; i--)
    {
        t.push_back(s[i]);
    }
    cout << t << "\n";

    if(s == t)
    cout << "Valid Palindrome";

    else
    cout << "Not Valid Palindrome";

return 0;
}