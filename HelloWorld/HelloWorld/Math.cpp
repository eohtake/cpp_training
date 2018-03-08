#include <iostream>
#include "Log.h"


/* Usar static quando se pretende utilizar a funcao apenas localmente.
O linker nao vai tentar linkar nada se a funcao nao estiver sendo chamada. 
Abaixo eh apenas a definicao da funcao.
*/

static int Multiply(int a, int b) 
{
	Log("Multiply");
	return a * b;
}

int main()
{
	int variable = 8;
	std::cout << Multiply(8, 5) << std::endl;
	std::cout << variable << std::endl;
	variable = 5;
	std::cout << variable << std::endl;
	std::cin.get();
}