#include <bits/stdc++.h>

using namespace std;

int main (){

	int quant, sorteado;
	
	cin >> quant;
	
	cin >> sorteado;
	
	vector<string> v(quant);
	
	for(int i =0; i < quant; i++){
	
		cin >> v[i];
	}
	
	
	sort(v.begin(), v.end());
		
		
	cout << v[sorteado - 1] << '\n';
	

	

    return 0;
}
