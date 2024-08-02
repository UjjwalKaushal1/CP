#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n; i++)
    {   long long y;
        cin >> y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    auto it = lower_bound(v.begin(),v.end(),7);
    if(it == v.end())
    {
        cout << "NO VALUE FOUND!";
    }
    auto itt = upper_bound(v.begin(), v.end(),9);
    if(itt == v.end())
    {
        cout << "NO VALUE FOUND!";
    }
    cout << *it << "\n";
    cout << *itt << "\n";
}