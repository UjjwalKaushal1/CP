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
    ll x;
    cin >> x;
    vector<int> v;
    ll num;
    cin >> num;
    for(int i = 0; i<x; i++)
    {
        ll y;
        cin >> y;
        v.pb(y);
    }
    reverse(vi,ve);
    ll min = *min_element(vi,ve);
    ll max = *max_element(vi,ve);
    ll sum = accumulate(vi,ve,0);
    ll cnt = count(vi,ve,num);
    auto it = find(vi,ve,num);
    if(it != ve)
    {
        cout << (*it) << "\n";
    }
    else
    {
        cout << "VALUE NOT FOUND!";
    }
    cout << min << " " << max << " " << sum << "\n";
}