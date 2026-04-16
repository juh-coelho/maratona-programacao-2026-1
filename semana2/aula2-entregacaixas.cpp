
#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C;
    
    if (!(cin >> A >> B >> C)) return 0;

  
    if ((A + B) < C || (A < B && B < C))  {
        cout << 1 << endl;
    } else if (A < B || B < C) {
        cout << 2 << endl;
    } else {
    cout << 3 << endl;
  }
    return 0;
}