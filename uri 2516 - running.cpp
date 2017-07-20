/* 

Author: Anik Chakrabortty
Created : July 20, 2017
Southeast University, Bangladesh (45)

*/ 

#include <bits/stdc++.h>

using namespace std; 

int main(){
	
	double s, va, vb; 
	
	while(cin >> s >> va >> vb) 
{

	if (va>vb)
	printf("%.2lf\n", s/(va-vb)); 
	else 
	cout << "impossivel" << endl;  
}
}
