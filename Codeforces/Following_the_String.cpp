#include<bits/stdc++.h>

//#include "macros.h"
// Shortcuts
#define ll long long
#define lli long long int
#define pb push_back
#define po pop_out
#define vi v.begin()
#define ve v.end()
#define yes cout << yes << "\n"
#define no cout << no << "\n"
#define cotu cout
#define cont continue
#define rev reverse(vi,ve);
#define f_loop for(int i = 0; i<v.size(); i++)
#define w_loop while(start <= end)
// Inbuilt algo's

 /* ll min = *min_element(vi,ve);
    ll max = *max_element(vi,ve);
    ll sum = accumulate(vi,ve,0);
    ll cnt = count(vi,ve,num);
    auto it = find(vi,ve,num);
*/
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }

    string mystring;
    int k = 0;
    for(int i = 0; i<n; i++)
    {
        if(v[i] == 0)
        {
            mystring.pb('a'+k);
            k++;
        }
        if(v[i] == 1)
        {
            for(int j = 0; j < i; j++)
            {
                if(v[j] == 1)
                {
                    mystring.pb(v[j]);
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    solve();

    return 0;
}