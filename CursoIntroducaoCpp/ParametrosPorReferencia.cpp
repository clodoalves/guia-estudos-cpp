#include "ParametrosPorReferencia.h"
#include "Iostream";

void troca(int& n, int& m) 
{
	int aux = n;
	n = m;
	m = aux;

	std::cout << "N agora eh: " << n << std::endl;
	std::cout << "M agora eh: " << m << std::endl;

	getchar();
	getchar();
}