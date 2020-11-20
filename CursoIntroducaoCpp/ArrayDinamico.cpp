#include "ArrayDinamico.h"
#include "iostream";

using namespace std;

void exemplo()
{
	int tamanhoArray;
	int* ponteiro;

	cout << "Informe o tamanho do array: ";
	cin >> tamanhoArray;

	ponteiro = new int[tamanhoArray];

	for (int i = 0; i < tamanhoArray; i++)
	{
		ponteiro[i] = rand();
		cout << "Valor " << ponteiro[i] << " na posicao " << i << endl;
	}

	delete [] ponteiro;

	getchar();
	getchar();
}