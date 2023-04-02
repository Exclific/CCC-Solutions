#include <bits/stdc++.h>

using namespace std;

int main() {
    string t, s;
    cin >> t >> s;
    int x = 0, i = 0;

    while (i <= t.length()) {
        if (t.substr(i, s.length()) == s) {
            cout << "yes";
            break;
        }
        else{   
            i++;
        }
        if(i == t.length()) {
            s.push_back(s[0]);
            s.erase(0, 1);
            i = 0;
            x++;
        }
        if(x == s.length()) {
            cout << "no";
            break;
        }
    }

    return 0;
}
