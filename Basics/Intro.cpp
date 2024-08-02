#include<bits/stdc++.h>
using namespace std;

int main(){
    
    cout << 7 / 2;
    cout << 7 / 2.0; // everything goes in higher precedence(double)
    cout << 7 / 2 * 3; //left to right
    cout << 3 * 7 / 2; // left to right

    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    double a = 100000;
    double b = 100000;
    double c = a*b;
    c = 1e24;
    cout << fixed << setprecision(0) << c << "\n";
}