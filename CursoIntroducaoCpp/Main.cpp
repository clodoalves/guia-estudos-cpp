#include "iostream";


void teste(int x)
{
	x = 10;
}

void testePonteiro(int* x)
{
	*x = 10;
}

void main()
{	  
	int y = 0;

	testePonteiro(&y);

	std::cout << "valor de y: " << y;
}


