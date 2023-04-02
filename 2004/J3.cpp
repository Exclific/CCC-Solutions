#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    string inp;
    vector<string> s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> inp;
        s1.push_back(inp);
    }
    for (int i = 0; i < m; i++) {
        cin >> inp;
        s2.push_back(inp);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << s1[i] << " as " << s2[j] << "\n";
        }
    }
    return 0;
}
