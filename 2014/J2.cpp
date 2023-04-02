#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {

int v; 
cin >> v;
string votes; 
cin >> votes;
int a = 0;
int b = 0;

for (int i = 0; i < v; i++) {
    if (votes[i] == 'A') {
        a++;
    }
    else {
        b++;
    }
}

if (a>b) {
    cout << 'A' << endl;
}
if (a<b) {
    cout << 'B' << endl;
}
if (a==b) {
    cout << "Tie" << endl;
}
return 0;
}
