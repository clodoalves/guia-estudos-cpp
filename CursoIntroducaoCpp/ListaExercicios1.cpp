#include "Exercicios.h"
#include "iostream"

using namespace std;

const string MSG_VITORIA_JOGADOR_1 = "O primeiro jogador venceu";
const string MSG_VITORIA_JOGADOR_2 = "O segundo jogador venceu";
const string MSG_MAIOR_NUMERO = " eh o maior numero";
const string MSG_NUMERO_MEDIO = " eh o numero medio";
const string MSG_MENOR_NUMERO = " eh o menor numero";
const double POLEGADAS_PARA_METRO = 39.37;

//Conteudos abordados: Composicao de um programa, variaveis, Constantes e estruturas de decisao

//1) Crie um programa para o jogo PEDRA, PAPEL E TESOURA
void ExecutarExercicio1()
{
	string opcoesJogo("PEDRA, PAPEL, TESOURA");
	string opcaoJogador1;
	string opcaoJogador2;

	cout << "Digite a opcao do primeiro jogador: ";
	cin >> opcaoJogador1;
	cout << "Digite a opcao do segundo jogador: ";
	cin >> opcaoJogador2;

	int indice1 = opcoesJogo.find(opcaoJogador1);
	int indice2 = opcoesJogo.find(opcaoJogador2);

	if (indice1 == -1 || indice2 == -1)
	{
		cout << "Algum jogador digitou uma opcao invalida";
	}
	else
	{
		if (opcaoJogador1 == opcaoJogador2)
		{
			cout << "Empate!";
		}
		else
		{
			if (opcaoJogador1 == "PEDRA")
			{
				if (opcaoJogador2 == "PAPEL")
				{
					cout << MSG_VITORIA_JOGADOR_2;
				}
				else
				{
					cout << MSG_VITORIA_JOGADOR_1;
				}
			}
			else if (opcaoJogador1 == "PAPEL")
			{
				if (opcaoJogador2 == "PEDRA")
				{
					cout << MSG_VITORIA_JOGADOR_1;
				}
				else
				{
					cout << MSG_VITORIA_JOGADOR_2;
				}
			}
			else
			{
				if (opcaoJogador2 == "PAPEL")
				{
					cout << MSG_VITORIA_JOGADOR_1;
				}
				else
				{
					cout << MSG_VITORIA_JOGADOR_2;
				}
			}
		}
	}

	getchar();
	getchar();
}

//2) Faça um programa para receber três números e listar o maior, médio e menor
void ExecutarExercicio2()
{
	int primeiroNumero = 0;
	int	segundoNumero = 0;
	int	terceiroNumero = 0;

	int	maiorNumero, menorNumero, numeroMedio;

	cout << "Digite o primeiro, segundo e terceiro numero " << endl;
	cin >> primeiroNumero >> segundoNumero >> terceiroNumero;

	if ((primeiroNumero == segundoNumero) || (segundoNumero == terceiroNumero)) 
	{
		cout << "Existem numeros iguais ";
		exit;
	}
	else 
	{
		maiorNumero = primeiroNumero;
		menorNumero = primeiroNumero;

		if (segundoNumero > maiorNumero) 
		{ 
			maiorNumero = segundoNumero; 
		}
		if (terceiroNumero > maiorNumero) 
		{ 
			maiorNumero = terceiroNumero;
		}

		if (segundoNumero < menorNumero) 
		{
			menorNumero = segundoNumero; 
		}
		if (terceiroNumero < menorNumero) 
		{ 
			menorNumero = terceiroNumero; 
		}

		if (primeiroNumero == maiorNumero)
		{
			if (segundoNumero == menorNumero) 
			{
				numeroMedio = terceiroNumero;
			}
			else 
			{
				numeroMedio = segundoNumero;
			}
		}
		else if (segundoNumero == maiorNumero) 
		{
			if (primeiroNumero == menorNumero) 
			{
				numeroMedio = terceiroNumero;
			}
			else 
			{
				numeroMedio = primeiroNumero;
			}
		}
		else 
		{
			if (primeiroNumero == menorNumero)
			{
				numeroMedio = segundoNumero;
			}
			else
			{
				numeroMedio = primeiroNumero;
			}
		}
		cout << maiorNumero << MSG_MAIOR_NUMERO << endl;
		cout << numeroMedio << MSG_NUMERO_MEDIO << endl;
		cout << menorNumero << MSG_MENOR_NUMERO << endl;
	}
	getchar();
	getchar();
}

//3) Faça um programa para converter de polegadas para metros
void ExecutarExercicio3() 
{
	double polegada, metro;

	cout << "Digite a medida em polegadas: ";
	cin >> polegada;

	metro = polegada / POLEGADAS_PARA_METRO;

	cout << polegada << " polegada(s)" << " corresponde(m) a " << metro << " metro(s)";

	getchar();
	getchar();
}

//4) Faça um programa para converter uma temperatura Celsius para Fahrenheit e vice-versa
void ExecutarExercicio4() 
{
	string opcao;
	double temperatura, temperaturaConvertida;
	cout << "Digite C para conversao de Celsius -> Fahrenheit ou F para conversao Fahrenheit -> Celsius: ";
	cin >> opcao;
	
	if (opcao == "C") 
	{
		cout << "Digite a temperatura em Celsius: ";
		cin >> temperatura;

		temperaturaConvertida = (temperatura * 9 / 5.0) + 32;

		cout << "Temperatura em Fahrenheit: " << temperaturaConvertida;
	}
	else if(opcao == "F")
	{
		cout << "Digite a temperatura Fahrenheit: ";
		cin >> temperatura;

		temperaturaConvertida = (temperatura - 32) * (5 / 9.0);

		cout << "Temperatura em Celsius: " << temperaturaConvertida;
	}
	else 
	{
		cout << "Opcao invalida";
	}

	getchar();
	getchar();
}