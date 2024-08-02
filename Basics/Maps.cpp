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
    map<int,string> m;
    m[1] = "abc";  // O(log(n))
    m[3] = "def";
    m[5] = "uij";
    m.insert({6,"yuh"});

    // map<int,string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << zz;
    // }
    // cout << zz;
    // OR

    for(auto &pr : m)
    {
        cout << pr.first << " " << pr.second << zz;
    }

    auto it = m.find(4);
    if(it == m.end())
    {
        cotu << "NO VALUE";
    }
    else
    {
        cout << (*it).first << " " << (*it).second;
    }

    m.erase(6); //O(log(n))

}