#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>

int main(){
	
	int n1, n2;
	float n3, a, b, c;
	cout<<"Digite o numero 1: ";
	cin>>n1;
	cout<<"Digite o numero 2: ";
	cin>>n2; 
	cout<<"Digite o numero 3: ";
	cin>>n3;
	a = pow(n1, 2) + (n2 / 2.0);
	cout<<"o produto do dobro do primeiro com metade do segundo: "<<a<<endl;
	b = pow(n1, 3) + n3;
	cout<<"a soma do triplo do primeiro com o terceiro: "<<b<<endl;
	c = pow(n3, 3);
	cout<<"o terceiro elevado ao cubo: "<<c<<endl;
	
	return 0;
	
}