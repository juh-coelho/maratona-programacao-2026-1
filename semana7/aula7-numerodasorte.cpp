#include <bits/stdc++.h>


using namespace std;

int main (){

	int t;
	
	cin >> t;
	
	while(t--){
		string s;
		cin >> s;
	
		sort(s.begin(), s.end());
		
		int zeros =  count(s.begin(), s.end(), '0');
		
		if(zeros){
			s[0] = s[zeros];
			s[zeros] = '0';
		
		};
		
		
		cout << s << '\n';
	
	};
	

    return 0;
}
