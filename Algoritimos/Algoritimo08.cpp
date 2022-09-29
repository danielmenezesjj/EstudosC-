#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>


int quadrado;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float valor_horas, horas_trabalhadas, salario;
	

	cout<<"Digite o valor da sua hora: ";
	cin>>valor_horas;
	cout<<"Digite o valor de horas trabalhadas: ";
	cin>>horas_trabalhadas;
	salario = valor_horas * horas_trabalhadas;
	cout<<"Seu salario total do mês é de R$" <<fixed <<setprecision(2)<<salario;
	
	return 0;
}

