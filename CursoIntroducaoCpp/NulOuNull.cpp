#include "NulOuNull.h"
#include "iostream";

using namespace std;

void TesteNul()
{
	char c = 0;

	if (c == '\0')
	{
		cout << "C igual a '\\0'";
	}

	getchar();
}

void TesteNull()
{
	int* p = 0;

	if (p == NULL)
	{
		cout << "Ponteiro nulo";
	}

	getchar();
}
