#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>


int quadrado;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float area, dobro, lado;
	
	cout<<"Informe o lado do quadrado: ";
	cin>>lado;
	area = lado * lado;
	dobro = area * 2;
	cout<<"a area é: "<<area<< " e o dobro é: "<<dobro;
	
	
	return 0;
}

