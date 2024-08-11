#include<bits/stdc++.h>
using namespace std;

/*
#define ll long long
#define v(ll) vector<long long>
#define v(i) vector<int>
#define v(c) vector<char>
#define pb push_back
#define po pop_back
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
*/

int main()
{
    int n,t,a;
    cin >> n >> t >> a;

    int half = n/2;
    if(t > half || a > half)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}