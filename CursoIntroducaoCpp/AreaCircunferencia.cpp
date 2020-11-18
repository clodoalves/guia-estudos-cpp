#include "AreaCircunferencia.h"
#include <math.h>
#include <iostream>
#define M_PI (3.14159265358979323846)

using namespace std;

void CalcularAreaCircunferencia() 
{
	double raio = 0;

	cout << "Informe o valor do raio: ";
	cin >> raio;

	cout << "A area da circunferencia eh: " << 2 * M_PI;

	getchar();
	getchar();
}