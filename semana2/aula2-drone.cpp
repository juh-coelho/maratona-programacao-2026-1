
#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C, D, E;
    
    cin >> A >> B >> C >> D >> E;

  
    if ((A <= D && B <= E) || (A <= D && C <= E) || (B <= D && C <= E) || (A <= E && B <= D) || (A <= E && C <= D) || (B <= E && C <= D) )  {
        cout << "S" << endl;
    } else {
    cout << "N" << endl;
  }
    return 0;
}