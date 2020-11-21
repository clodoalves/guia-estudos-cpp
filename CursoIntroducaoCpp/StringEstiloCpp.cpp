#include "iostream";
#include "string";

using namespace std;
 
/*
	Strings em C++:

	Utilizando o arquivo de cabecalho <string> podemos usar a classe string sem a necessidade
	declaracao de um array de chars, como eh feito nas string em C.

*/

void exemplo6_6()
{
	string texto;
	cout << "Informe um texto: ";
	getline(cin, texto);

	cout << "Texto = " << texto << " {" << texto.length() << "}" << endl;
	cout << "Posicao de (a): " << texto.find("a");
	getchar();
}
