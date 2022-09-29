#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cctype>
#include <locale.h>
#include <iomanip>

int main(){
	setlocale(LC_ALL, "Portuguese");
	    float tamanhoDoArquivo,velocidadeDaInternet,tamanhoDoArquivoEmMegaBits,tempoDeDownload;
	cout<<"Digite o tamanho do arquivo em mb: ";
	cin>>tamanhoDoArquivo;
	cout<<"Digite a velocidade da internet em mbps: ";
	cin>>velocidadeDaInternet;
	tamanhoDoArquivoEmMegaBits = tamanhoDoArquivo *8;
	tempoDeDownload = tamanhoDoArquivoEmMegaBits / velocidadeDaInternet;
	cout<<"O tempo aproximado pra baixar é: "<<tempoDeDownload;
	
	
	return 0;
	
}