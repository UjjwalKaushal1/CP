#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long
#define pb push_back
#define po pop_back
#define cotu cout

void printvec(vector<pair<int,int>> &v)
{
    for(int i = 0; i<v.size(); i++)
    {
        cotu << v[i].first << " " << v[i].second;
    }
    cotu << "\n";
}

int main()
{   
    ll t;
    cin >> t;
    while(t--)
    {
        vector<pair<int,int>> v;
        ll n;
        cin >> n;
        for(int i = 0; i<n; i++){
            ll x,y;
            cin >> x >> y;
            v.pb({x,y});
        }
        printvec(v);
    }

}

