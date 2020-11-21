#include "Arquivo.h"
#include "string.h";
#include "fstream";
#include "fstream";
#include "iostream";
#include "sstream";

using namespace std;

/*
	Manipulacao de arquivos:

	Utilizando o arquivo de cabecalho <fstream>. 
	No fluxo de entrada para manipulacao de arquivos
	podemos usamos o objeto ifstream. 
	No fluxo de saida para manipulacao de arquivos
	usamos o objeto ofstream 
*/

void exemplo7_1() 
{
	char nomeArquivoOrigem[30];
	char nomeArquivoDestino[30];
	string linha;
	int contador = 1;

	cout << "Digite o nome do arquivo de origem: ";
	cin.getline(nomeArquivoOrigem, 30);
	ifstream arquivoOrigem(nomeArquivoOrigem);

	cout << "Digite o nome do arquivo de destino: ";
	cin.getline(nomeArquivoDestino, 30);
	ofstream arquivoDestino(nomeArquivoDestino);

	while (arquivoOrigem >> linha)
	{
		arquivoDestino << contador++ << ") " << linha << " (" << linha.length() << ")" << endl;
	}

	arquivoOrigem.close();
	arquivoDestino.close();
	getchar();
}	


/*
	Fluxo de Strings

	Utilizamos o arquivo de cabecalho <sstream> para permitir que 
	uma string seja utilizada como um arquivo de texto. 
    istringstream eh para o fluxo de entrada e
	ostringstream eh para o fluxo de saida
*/ 


void exemplo7_2() 
{
	string nome;
	int idade;
	double peso;

	istringstream entrada("Joao da Silva 65 110.15");

	entrada >> nome >> idade >> peso;

	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Peso: " << peso << endl;

	getchar();
}

void exemplo7_3()
{
	ostringstream saida;

	saida << "Joao da Silva ";
	saida << 65 << " anos ";
	saida << 110.15 << " kg ";

	cout << "saida.str() = " << saida.str();
	getchar();
}