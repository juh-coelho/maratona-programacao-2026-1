#include <bits/stdc++.h>


using namespace std;

int main(){
	
	int km, sensor, resto, oito =8;
	

	

	cin >> km;
	
	
	while(km >= 8){
	
	   resto = (km % oito);
	   

	  km = km/8;

	};
	
	if(km<8){
		  resto = (km % oito);
	};
   
    
    if(resto == 6){
		sensor = 1;
    } else if (resto ==7){
		sensor = 2;
    
    }else if(resto == 0 || resto == 5){
		sensor = 3;
	}


	cout << sensor ;

	
	
	return 0;
}
