#include <bits/stdc++.h>

using namespace std;
int main() { 
  int l1, l2, c1, c2;
  cin >> l1 >> l2 >> c1 >> c2;
  
  int pontuacaoL, pontuacaoC;
  
  
  if(l1 == l2){
	pontuacaoL = 2 * (l1 + l2);
  } else if (l1 == l2 - 1 || l1 == l2 + 1){
    pontuacaoL = 3 * (l1 + l2);
  } else {
    pontuacaoL = (l1 + l2);
  };
  
  
  if(c1 == c2){
	pontuacaoC = 2 * (c1 + c2);
  } else if (c1 == c2 - 1 || c1 == c2 + 1){
    pontuacaoC = 3 * (c1 + c2);
  } else {
    pontuacaoC = (c1 + c2);
  };
  
  if (pontuacaoL > pontuacaoC){
  cout << "Lia" << endl;
  } else if (pontuacaoC > pontuacaoL){
    cout << "Carolina" << endl;
  } else {
   cout << "empate" << endl;
  };
  
 return 0;
}
