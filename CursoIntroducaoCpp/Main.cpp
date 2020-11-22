#include "Pessoa.h";
#include <iostream>

void main()
{	  
	Pessoa pessoa;
	int codigo;
	string nome;
	char charTipo;
	TpPessoa tipo;

	cout << "Digite um codigo: ";
	cin >> codigo;

	cout << "Digite um nome: ";
	cin >> nome;

	cout << "Digite o tipo (F ou J): ";
	cin >> charTipo;

	tipo = charTipo == 'F' ? TpPessoa::psFisica : TpPessoa::psJuridica;
	
	pessoa.assign(codigo, nome, tipo);
	pessoa.print();

	//Utilizando construtor de copia
	{
		cout << "Criando copia do objeto...";
		Pessoa pessoa2(pessoa);
		pessoa2.print();

		//Destrutor chamado implicitamente
	}

	//Utilizando construtor criado
	Pessoa pessoa3(234, "Joao Jose", TpPessoa::psJuridica);
	//Destrutor chamado explicitamente
	pessoa3.~Pessoa();

	getchar();
	getchar();
}


