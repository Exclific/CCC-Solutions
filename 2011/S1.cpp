#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t = 0, s = 0;
    cin >> n;
    string l;
    for (int i = 0; i < n+1; i++) {
        getline(cin,l);
        for (int i = 0; i < l.length(); i++) {
            if (l[i] == 't' || l[i] == 'T') {
                t++;
            }
            if (l[i] == 's' || l[i] == 'S') {
                s++;
            }
        }
    }

    if (t>s) {
        cout << "English" << endl;
    }
    if (t<=s) {
        cout << "French" << endl;
    }
    
    return 0;
}
