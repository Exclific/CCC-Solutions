#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0;
    vector<string> peppers = {"Poblano", "Mirasol", "Serrano", "Cayenne", "Thai", "Habanero"};
    vector<int> units = {1500, 6000, 15500, 40000, 75000, 125000};
    cin >> n;
    string p;
    for (int i = 0; i < n; i++) {
        cin >> p;
        for (int j = 0; j < peppers.size(); j++){
            if (p == peppers[j]) {
                x+=units[j];
            }
        }
    }

    cout << x << endl;
    return 0;
}
