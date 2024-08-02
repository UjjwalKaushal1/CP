#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long
#define pb push_back
#define zz endl
int main()
{
    vector<int> v;
    ll n;
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    
        
    
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << zz;
}