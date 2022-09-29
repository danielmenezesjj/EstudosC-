#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>


int quadrado;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float grausC, grausF;
	cout<<"Digite a temperatura em Farenheit: ";
	cin>>grausF;
	grausC = 5*((grausF - 32)/9);
	//grausC = (grausF - 32)/1.8; que daria o mesmo resultado!
	cout<<fixed<<setprecision(2)<<grausC;
	
	
	
	return 0;
}

