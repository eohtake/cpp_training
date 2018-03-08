// Este programa foi modificado para exemplificar a
// necessidade de um "entry point" no programa. A funcao entry point foi modificada.
// Por padrao a funcao "main" é considerada o entry point.
// Qualquer coisa pode ser o entry point. Properties > Linker > Advanced > Entry Point.

#include <iostream>
#include "Log.h"

int not_main()
{
	Log("Hello World!");
	std::cin.get();
	return 0;
}
