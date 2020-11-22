#pragma once
#include <string>
#include <iostream>
using namespace std;

enum class TpPessoa {psFisica, psJuridica};

/*Definicao da classe*/

class Pessoa
{
	private:
		int _codigo;
		string _nome;
		TpPessoa _tipo;

	public:
			void assign(int, string, TpPessoa);
			int getCodigo();
			string getNome();
			TpPessoa getTpPessoa();
			void print();

			/*
				Destrutores

				Liberam os objetos que foram inicializados.
				Por padrao, existe um destrutor declarado implicitamente.
				O destrutor pode ser chamando explicitamente
				ou implicitamente quando o objeto sai
				de seu escopo
			*/

			~Pessoa()
			{
				cout << "Objeto eliminado" << endl;
			}


	/*Construtores

	Existem pelo menos dois contrutores em uma
	Sao eles: default e copia
	*/

	Pessoa() 
	{
		_codigo = 0;
	    _nome = "";
		_tipo = TpPessoa::psFisica;
	}
		
	Pessoa(int codigo, string nome, TpPessoa tipo)
    {
		_codigo = codigo;
		_nome = nome;
		_tipo = tipo;
	}


	Pessoa(int codigo, string nome) :
	     _codigo(codigo),
		_nome(nome) 
	{
		_tipo = TpPessoa::psFisica;
	}
};

