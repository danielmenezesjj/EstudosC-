#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, homens, mulheres;
	cout<<"Digite sua altura: ";
	cin>>altura;
	homens = (72.7 * altura) - 58;
	mulheres = (62.1 * altura) - 44.7;
	cout<<"Homem : seu peso ideal é: "<<fixed<<setprecision(1)<<homens<<endl;
	cout<<"Mulher: seu peso ideal é: "<<fixed<<setprecision(1)<<mulheres;
	
	
	return 0;
	
}