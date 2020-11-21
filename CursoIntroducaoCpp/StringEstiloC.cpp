#include "StringEstiloC.h"
#include "iostream";
#include "cctype";
#include "cstring";
using namespace std;

/*
	Strings em C:

	Sequencia de caracteres que terminam em caractere especial NUL ou '\0'.
	Para manipula-las eh necessario adicionar o cabecalho <string>
*/

void exemplo6_1()
{
	char s[] = "Exemplo1";

	for (size_t i = 0; i < 5; i++)
	{
		cout << "s[" << i << "] = " << s[i] << endl;
	}

	getchar();

}

/*
	Objeto cin:

	Objeto de entrada de dados que possuem varias funcoes uteis que podem ser usadas
	em conjunto com strings: getline(), get(), ignore(), putback(), etc
*/

void exemplo6_2()
{
	const int tamanho = 100;
	char texto[tamanho] = "";

	do
	{
		cout << "Digite o texto que sera indentado: "<< endl;
		cin.getline(texto, tamanho);
		cout << "\t" << texto << endl;
	}
	while (*texto);
}


void exemplo6_3()
{
	const int tamanho = 100;
	char texto[tamanho] = "";

	do
	{
		cout << "Digite o texto separado por virgula que sera indentado: " << endl;
		cin.getline(texto, tamanho, ',');
		cout << "\t" << texto << endl;

	} while (*texto);
}


/*
	Funcao get:

	Funcao que efetua a leitura a string caractere a caractere, diferente do getline do objeto cin
*/

void exemplo6_4() 
{
	char busca = '\0';
	char textoCompleto = '\0';
	int contador = 0;

	cout << "Digite um caractere para busca: ";
	cin.get(busca);

	cout << "Digite um texto: ";
	cin.get(textoCompleto);

	while (cin.get(textoCompleto))
	{
		if (busca == textoCompleto)
		{
			contador++;
		}

		if (textoCompleto == '.')
		{
			break;
		}
	}

	cout << "O texto buscado apareceu " << contador << " vez(es)";

	getchar();
	getchar();
}

/*
	cctype

	Este arquivo de cabecalho contem uma serie de funcoes para manipulacao
	de caracteres: isalpha(), iscntrl(), isdigit(), isgraph(),
	islower(), isspace(), isupper(), tolower(), toupper()
*/

void exemplo6_5() 
{
	char texto = '\c';

	cout << "Digite o texto: ";
	cin.get(texto);

	while (cin.get(texto))
	{
		texto = _CCTYPE_::toupper(texto);

		if (texto == '.') 
		{ 
			break; 
		}
	}

	cout << "Texto em caixa alta: " << texto;
}

/*
	cstring

	Este arquivo de cabecalho contem uma serie de funcoes para manipulacao
	de Strings C (array de chars). O cctype eh proprio para
	caracteres. Exemplos de funcoes: Strlen(), strchr(), strstr(),
	strrchr(), strcat(), strcpy(), strtok(), strcmp()
*/