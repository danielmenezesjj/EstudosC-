#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, peso;
	cout<<"Digite sua altura: ";
	cin>>altura;
	peso = (72.7*altura) - 58;
	cout<<"O seu peso ideal é: "<< fixed << setprecision(1)<<peso;
	
	return 0;
	
}