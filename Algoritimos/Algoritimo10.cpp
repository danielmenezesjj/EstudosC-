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
	cout<<"Digite a temperatura em graus Celsius: ";
	cin>>grausC;
	grausF = (grausC * 1.8) + 32;
	cout<<grausF;
	
	
	return 0;
}

