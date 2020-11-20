#include "Ponteiros.h";
#include "iostream"

using namespace std;

void exemplo1()
{
	int x = 20;
	int* p = &x;

	cout << "Valor de x: " << x << endl;
	cout << "Endereco de x: " << &x << endl;
	cout << "Endereco de p: " << &p << endl;
	cout << "Endereco que p esta apontando: " << p << endl;
	cout << "Valor de p: " << *p << endl;
	*p = 30;
	cout << "Novo valor de x: " << x << endl;

	getchar();
}

void exemplo2() 
{
	int x, * ptrx, ** pptrx;

	//inicializando a variavel com zero
	x = 0;
	cout << "\nvalor de x = %d\n" << x;
	cout << "Endereco de x: %x\n\n" << &x;

	//Atribuindo os enderecos para os ponteiros
	ptrx = &x; // ptrx aponta para x
	pptrx = &ptrx; // pptrx aponta para ptrx    

	*ptrx = *ptrx + 10;
	cout << "\nvalor de x = %d" << x;
	cout << "\nEndereco apontado por ptrx: %x\n" << ptrx;
	cout << "Valor da variavel X que esta sendo apontada por ptrx: %d\n" << *ptrx;
	cout << "Endereco de memoria da variavel ptrx %x\n" << &ptrx;

	**pptrx = **pptrx + 10;
	cout << "\n\nvalor de x = %d" << x;
	cout << "\nEndereco apontado por **pptrx: %x" << pptrx;
	cout << "\nValor da variavel para a qual pptrx faz referencia: %d" << **pptrx;
	cout << "\nEndereco de memoria da variavel **pptrx %x\n\n" << &pptrx;

	getchar();
}

void exemplo3(int a, int b) 
{
	cout << "Valor de a: " << a << endl;
	cout << "Valor de b: " << b << endl;

	cout << "Maior numero: " << maiorNumero(a, b) << endl;

	maiorNumero(a, b) = 100;

	cout << "Novo valor de a: " << a << endl;
	cout << "Novo valor de b: " << b;
}

void exemplo4() 
{
	int v [3] = {100, 200, 300};

	int* p = v;

	cout << "Vetor v aponta para: " << v << endl;
	cout << "Ponteiro p aponta para: " << p << endl;
	cout << "Conteudo de p: " << *p << endl;

	getchar();
}

void exemplo5() 
{
	int v[3] = { 100, 200, 300 };

	int* fim = v + 3;

	for (int* p = v; p < fim; p++)
	{
		cout << "P aponta para: " << p << endl;
		cout << "Conteudo de p: " << *p << endl;
	}

	getchar();
}

int& maiorNumero(int& a, int& b) 
{
	return (a > b ? a : b);
}