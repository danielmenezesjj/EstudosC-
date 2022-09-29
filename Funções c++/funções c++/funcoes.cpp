#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>

void calcularmedia(){
	double n1, n2, n3, n4, media, mediaMaxima, mediaMinima;
	cout<<"*************************************************************"<<endl;
	cout<<"Bem vindo ao sistema de calcular media da sua Escola!!\n"<<endl;
	cout<<"*************************************************************"<<endl;
	cout<<"Digite qual é a media maxima para ser aprovado: ";
	cin>>mediaMaxima;
	cout<<"Digite qual é a media minima para ser reprovado: ";
	cin>>mediaMinima;
	cout<<"Atenção!!! - Se sua media for menor que a Media Maxima e maior que a Media Minima, você ira precisar fazer uma prova final! "<<endl;;
;
	cout<<"*********************************************************************************************************************"<<endl;
	cout<<"Digite a primeira nota do aluno: ";
	cin>>n1;
	cout<<"Digite a segunda nota do aluno: ";
	cin>>n2;
	cout<<"Digite a terceira nota do aluno: ";
	cin>>n3;
	cout<<"Digite a quarta nota do aluno: ";
	cin>>n4;
	media = (n1 + n2 + n3 + n4) / 4;
	if(media >= mediaMaxima ){
		cout<<"Sua media foi de: "<<media<<" você foi aprovado!!";
	
	}else if (media < mediaMinima ){
		cout<<"Sua media foi de: "<<media<<" você foi reprovado!!";
	}else if(media < mediaMaxima && media > mediaMinima ){
		cout<<"Sua media foi de: "<<media<<" você precisa fazer a prova final!!";
	}	
}

void imprimirNumerosPares(){
	
	for(int i = 0; i <= 100; i++){
		cout<<"Os numeros pares são: "<<i<<endl;
	}
	
}

void inssSalario(){
	
	double salario, desconto;
	cout<<"************* BEM VINDO AO DESCONTO DE INSS *************\n"<<endl;
	cout<<"Digite seu salario: ";
	cin>>salario;
	if(salario <= 600 ){
		cout<<"Seu salario não tem desconto ele é isento";
	}else if(salario > 600 && salario <= 1200){
		desconto = salario - 0.20;
		cout<<"Seu salario é de: "<<desconto<<" você teve um desconto de 20%\n"<<endl;	
	}else if(salario > 1200 && salario <= 200 ){
		desconto = salario - 0.25;
		cout<<"Seu salario é de: "<<desconto<<" você teve um desconto de 25%\n"<<endl;
	}else if( salario > 2000 ){
		desconto = salario - 0.30;
		cout<<"Seu salario é de: "<<desconto<<" você teve um desconto de 30%\n"<<endl;
	}
}

void palavraPalindromo(){
	cout<<"**************** Descubra se sua palavra é palindroma ****************\n"<<endl;
	
    string palavra, palindromo;
    cout<<"Digite uma palavra e descubra se ela e palindromo: ";
    cin >> palavra;
    for(int i=0; i<palavra.length(); i++)
    palindromo = palavra[i] + palindromo;
  	if( palavra == palindromo ){
  		cout<<"Essa palavra é palindromo "<<"você digitou: "<<palavra <<" e ela inversa é: "<<palindromo<<endl;
	  }else{
	  	cout<<"Essa palavra não é palindromo, você digitou: "<<palavra<< " e o inverso dela é: "<<palindromo<<endl;
	  }		
}

void calcularMetroEmCm(){
	cout<<"***************Bem vindo ao convertor de metros em cm ***************\n"<<endl;
	
	int metros, cm;
	cout<<"Digite quantos metros deseja converter para cm: ";
	cin>>metros;
	
	cm = metros * 100;
	cout<<metros<<" metros, tem "<<cm<<" cm";
	
}

void natacao(){
	int idades;
	cout<<"Digite a idade dos alunos";
	cin>>idades;
	if(idades <= 5 || idades <=6 || idades <= 7){
		cout<<"Infantl A"<<endl;
	}
	
	
}





int main() {
	setlocale(LC_ALL, "Portuguese");
	int console;

	while(true){
	cout<<"************************ Funções ************************"<<endl;
	cout<<"1 - Calcular media da sua Escola!!"<<"			*"<<endl;
	cout<<"2 - Imprimir numeros somentes numeros pares"<<"		*"<<endl;
	cout<<"3 - Descubra o desconto do INSS no seu salario   	*"<<endl;
	cout<<"4 - Descubra se sua palavra é palindroma 		*"<<endl;
	cout<<"5 - Converta metros em centimetros			*"<<endl;
	cout<<"************************ Funções ************************\n"<<endl;
	cout<<"Digite qual função deseja: ";
	cin>>console;
	
	switch(console){
		case 1:
			calcularmedia();
			break;
		
		case 2:
			imprimirNumerosPares();
			break;
		case 3:
			inssSalario();
			break;
		case 4:
			palavraPalindromo();
			break;
		case 5:
			calcularMetroEmCm();
			break;
			
		case 6:
			natacao();
			break;
			
	
			
				
	}
		
		
		
}
	return 0;
}

