#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>

int quadrado;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int metros, centimetros;
	
	cout<<"Digite os metros: ";
	cin>> metros;
	
	centimetros = metros * 100;
	cout<<metros <<" metros"<<" em centimetros é: "<<centimetros;

	return 0;
}

