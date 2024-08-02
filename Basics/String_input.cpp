#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string str1;
    // cin >> str1;
    // cout << str1;

    string str2;
    getline(cin,str2);
    cout << str2;    

    int t;
    cin.ignore();   
    while(t--)
    {
        string str;
        getline(cin,str);
        cout << str << "\n";
    }


    return 0;
}