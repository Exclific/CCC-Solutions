#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, x;
    cin >> n >> d;
    x = n%d;

    if(n%d==0) cout << n/d << endl;

    if(n%d!=0 && n>d) cout << n/d << ' ' << x/__gcd(x,d) << '/' << d/__gcd(x,d) << endl;

    if(n<d) cout << x/gcd(n,d) << '/' << d/__gcd(x,d) << endl;
    
    return 0;
}
