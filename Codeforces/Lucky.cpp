#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int num1 = s[0]+s[1]+s[2];
        int num2 = s[3]+s[4]+s[5];
        if(num1 == num2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}