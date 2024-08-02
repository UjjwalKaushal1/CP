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

void print(set<string> s)
{
    for(auto &it : s)
    {
        cout << it << zz;
    }
}
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("bcd");
    s.insert("efg");
    s.insert("jkl");
    auto it = s.find("jkl");
    print(s);
}