#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long
#define cotu cout
#define zz endl
#define pb push_back
#define po pop_back
#define vi v.begin()
#define ve v.end()

int main()
{
    unordered_set<string> s;
    ll n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    ll q;
    cin >> q;
    while(q--)
    {
        string strr;
        cin >> strr;
        if(s.find(strr) == s.end())
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
}