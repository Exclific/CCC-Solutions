#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double inp, x = 0, a = 0;
    vector<double> h, w;
    cin >> n;
    for (int i = 0; i < n+1; i++) {
        cin >> inp;
        h.push_back(inp);
    }
    for (int i = 0; i < n; i++) {
        cin >> inp;
        w.push_back(inp);
    }
    for (int i = 0; i < w.size(); i++) {
        x = (w[i] * (h[i] + h[i+1])) / 2;
        a+=x;
    }
    cout << fixed << a << "\n";
}
