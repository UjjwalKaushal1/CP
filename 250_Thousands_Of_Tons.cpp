// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<long long> factor(ll n)
{
    vector<ll> p;
    for(int i = 1; i<=(n/2); i++)
    {
        if(n % i == 0)
        {
            p.push_back(i);
        }
    }
    // for(int i = 0; i<v.size(); i++) cout << v[i] << " ";
    return p;
}
void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    if(n  ==  1)
    {
        cout << 0 << endl;
        return;
    }

    vector<ll> V = factor(n);
    
    ll sum = 0,ans = -1,cnt = 0,anss = 1e18+7;
    vector<pair<ll,ll>> result;
    for(int i = 0; i<V.size(); i++)
    {
        cnt = 0;
        sum = 0;
        // cout << V[i] << " ";

        for(int j = 0; j<n; j++)
        {
            sum += v[j];
            cnt++;
            // cout << ans <<  " " << anss << "\n";
            if(cnt == V[i])
            {
                ans = max(ans,sum);
                anss = min(anss,sum);
                cnt = 0;
                sum = 0;
            }
        }
        // cout << ans << " " << anss << " ";
        pair<ll,ll> p = {ans,anss};
        result.push_back(p);
        ans = 0;
        anss = 1e18;
    }
    sort(result.begin(),result.end());

    // for(int i = 0; i<result.size(); i++)
    // {
    //     cout << result[i].first << " " << result[i].second << " "; 
    // }
    // cout << endl;

    ll diff = result[0].first - result[0].second;

    for(int i = 1; i<result.size(); i++)
    {
        ll temp = result[i].first - result[i].second;
        if(temp > diff)
        {
            diff = temp;
        }
    }
    cout << diff << endl;


    }
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}