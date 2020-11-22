#include "Pessoa.h"
#include <iostream>

/*
	Classe:

	Conjunto de atributos e metodos que definem uma funcionalidade
	segundo seu objetivo
*/

/*Implementacao da classe*/
int Pessoa :: getCodigo() 
{
	return _codigo;
}

string Pessoa::getNome()
{
	return _nome;
}

TpPessoa Pessoa::getTpPessoa() 
{
	return _tipo;
}

void Pessoa::assign(int codigo, string nome, TpPessoa tipo)
{
	this->_codigo = codigo;
	this->_nome = nome;
	this->_tipo = tipo;
}

void Pessoa::print() 
{
	TpPessoa tipoPessoa = TpPessoa::psFisica;

	cout << "Codigo: " << _codigo << endl;
	cout << "Nome: " << _nome << endl;
	cout << "Tipo: " << (_tipo == tipoPessoa ? "Pessoa fisica" : "Pessoa juridica") << endl;
}

