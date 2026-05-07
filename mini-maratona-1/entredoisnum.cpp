#include <bits/stdc++.h>


using namespace std;

int main(){
	
	int a, b, reserva;

	

	cin >> a >> b;
	
	if(b < a){
		
	reserva = a;
	a = b;
	b = a;
		};

	for(int i =a; i <= b; i++){
		
		cout << i ;
	};

	
	
	return 0;
}
