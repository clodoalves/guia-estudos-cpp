#include "Exercicios.h"
#include "iostream";

using namespace std;

//1) Marque com V ou F para 'a' um array e 'i' um int
//a) (V) a[i] == *(a + i)
//b) (F) *(a + i) == i[a]
//c) (F) a[i] == i[a]
void ExecutarExercicio5_1()
{
	//a) (V) a[i] == *(a + i)
	int a[] = { 100, 200, 300 };
	int indice = 1;
	cout << "a[i]: " << a[indice] << endl;
	cout << "*(a + i): " << *(a + indice) << endl;

	getchar();

	//b) (V) *(a + i) == i[a]
	cout << "*(a + i): " << *(a + 0) << endl;
	cout << "i[a] " << indice[a] << endl;

	getchar();

	//c) () a[i] == i[a]
	cout << "a[i]: " << a[indice] << endl;
	cout << "i[a] " << indice[a] << endl;

	getchar();

}

//2) Qual a diferenca entre as declaracoes abaixo:
// double* f()
// double (*f)()
void ExecutarExercicio5_2()
{
	// double* f() => declaracao de ponteiro para double
	// double (*f)() => declaracao de ponteiro para funcao com retorno double
}

//3) Crie uma funcao que utiliza ponteiros para copiar o conteudo de 
// um array de double
void ExecutarExercicio5_3()
{

}

//4) Crie uma funcao que receba como parâmetro um array com N
// ponteiros para um float e retorne um ponteiro para o valor
// maximo dos N floats recebidos
void ExecutarExercicio5_4()
{

}

 void CopiarArray(double a) 
{
	
}