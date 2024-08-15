#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(),s.end());
    int cnt = 1,ans = 0;
    for(int i = 1; i<s.size(); i++)
    {
        if(s[i] == s[i-1])
        {
            cnt++;
        }
        else
        {
            ans = max(ans,cnt);
            cnt = 1;
        }
    }
    cout << ans;
}