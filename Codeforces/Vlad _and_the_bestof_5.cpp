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
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<char> v;
        for(int i = 0; i<5; i++)
        {
            v.pb(s[i]);
        }
        int c1 = count(vi,ve,'A');
        int c2 = 5-c1;
        if(c1 > c2)
        cout << 'A' << "\n";
        else
        cout << 'B' << "\n";
    }
    return 0;
}