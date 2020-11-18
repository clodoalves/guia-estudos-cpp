#include "FormulaBhaskara.h"
#include "complex.h"
#include "iostream"

using namespace std;

void Executar() 
{
	double a, b, c, x1, x2, delta = 0;
	cout << "Informe os valores da a, b e c" << endl;
	cin >> a >> b >> c;	
	delta = (b * b) - (4 * a * c);
	
	if (delta >= 0) {

		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (+b + sqrt(delta)) / (2 * a);
		cout << "X1 = " << x1 << " X2 = " << x2;
	}
	else 
	{
		cout << "Nao existem raizes reais";
	}
	
	getchar();
	getchar();
}