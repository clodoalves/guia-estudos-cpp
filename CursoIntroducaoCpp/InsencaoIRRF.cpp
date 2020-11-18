#include "InsencaoIRRF.h"
#include "iostream";


using namespace std;

void VerificarIsencao()
{
	const double IRRF = 0.15;
	double salario = 0;

	cout << "Informe o salario:";
	cin >> salario;

	if (salario < 1024) 
	{
		cout << "IRRF isento!";
	}
	else 
	{
		cout << "O valor de IRRF eh: " << IRRF * salario;
	}

	getchar();
	getchar();
}

void VerificarIsencaoComOperadorTernario()
{
	const double IRRF = 0.15;
	double salario = 0;
	double valor = 0;

	cout << "Informe o salario:";
	cin >> salario;

	valor = salario <= 1024 ? 0 : IRRF * salario;

	cout << "Valor de IRRF: " << valor;

	getchar();
	getchar();
}