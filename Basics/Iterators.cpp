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
    while(t-- > 0)
    {
        ll n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }
        //vector<int> :: iterator it = v.begin();
        for(auto it = vi; it < ve; it++)  // After commenting the above line, we can use the keyword auto for the iteration!
        {
            cout << *(it) << zz;
        }

        // OR

        for(int value : v)
        {
            cout << value << " ";  // here each value is just the copy of each value of the vector
        }
    }
}