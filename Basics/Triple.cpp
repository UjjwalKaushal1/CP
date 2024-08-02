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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v;
        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
        }
        int max = 0,count = 1;
        vector<ll> a;
        sort(vi,ve);
        for(int i = 1; i<n; i++)
        {
            if(v[i] == v[i-1])
            {
                count++;
            }
            if(count == 3)
            {
                a.pb(v[i]);
                count = 1;
            }
        }
        if(v.size() == 1)
            cout << -1 << endl;

        for(int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}