#include "PonteirosParaFuncoes.h"
#include "iostream";

using namespace std;

int elevarAoQuadrado(int n) 
{
	return n * n;
}

int elevarAoCubo(int n) 
{
	return elevarAoQuadrado(n) * n;
}

int elevarAQuartaPotencia(int n) 
{
	return elevarAoCubo(n) * n;
}


void executarExemplo() 
{
	int numero, opcao;
	int (*pf) (int);
	pf = {};
	cout << "Digite um numero: ";
	cin >> numero;
	
	cout << " Digite uma operacao: " << endl;
	cout << " (1) Elevar numero ao quadrado" << endl;
	cout << " (2) Eleva numero ao cubo" << endl;
	cout << " (3) Elevar numero a quarta potencia" << endl;
	cin >> opcao;

	switch (opcao)
	{
	case 1:
		pf = elevarAoQuadrado;
		break;
	case 2:
		pf = elevarAoCubo;
		break;
	case 3:
		pf = elevarAQuartaPotencia;
		break;
	default:
		cout << "Opcao invalida";
		break;
	}

	cout << "O resultado eh: " << pf(numero);

	getchar();
	getchar();
}