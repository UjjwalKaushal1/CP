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
    auto sum = [](ll x, ll y){return x+y;};
    cout << sum(4,5) << "\n";

    vector<int> v = {1,5,7};
    
    cout << all_of(vi,ve,[](int x){return x > 0;}); 
    cout << any_of(vi,ve,[](int y){return y > 0;});
}