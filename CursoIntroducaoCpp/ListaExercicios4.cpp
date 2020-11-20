#include "Exercicios.h"
#include "iostream";

using namespace std;
//1) Verifique se as expressoes abaixo sao verdadeiras
//	 a) () se (x == y), entao (&x == &y)
//	 b) () se (x == y), entao (*x == *y)
//	 c) () int& r = 22
//	 d) () int* r = &22
void ExecutarExercicio4_1() 
{ 
//	//a) (F)
//	int x1;
//	int y1;
//	x1 = 20;
//	y1 = 20;
//
//	cout << "valor de x: " << x1 << endl;
//	cout << "valor de y: " << y1 << endl;
//	cout << "endereco de memoria x: " << &x1 << endl;
//	cout << "valor de memoria y : " << &y1 << endl;
//
//	getchar();
//	getchar();

//b) (F)
    int* x2 = new int;
	int* y2 = new int;

	*x2 = 30;
	*y2 = 30;

	cout << "valor de x: " << x2 << endl;
	cout << "valor de y: " << y2 << endl;
	cout << "valor do endereco de memoria x: " << *x2 << endl;
	cout << "valor do endereco de memoria y : " << *y2 << endl;

	delete x2;
	delete y2;

	getchar();
	getchar();


	//c) (F)
	//int& r = 22;

	//d) (F)
	//int* p = &22;
}

//2) Se x e y forem ponteiros para int e n for um int, 
//   quais expressões abaixo são corretas?
//	 () x + y
//	 () x + n
//	 () x - n
//	 () n + x
//   () n - y
void ExecutarExercicio4_2() 
{
	//	 (F) x + y
	//	 (V) x + n
	//	 (V) x - n
	//	 (V) n + x
	//   (F) n - y
}
