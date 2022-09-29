#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>

int quadrado;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, media;
	cout<<"Digite a nota 1 do aluno: ";
	cin>>n1;
	cout<<"Digite a nota 2 do aluno: ";
	cin>>n2;
	cout<<"Digite a nota 3 do aluno: ";
	cin>>n3;
	cout<<"Digite a nota 4 do aluno: ";
	cin>>n4;
	media = (n1 + n2 + n3 + n4 ) / 4;
	cout<<"A média do aluno é de: "<<media;
	
	

	return 0;
}
