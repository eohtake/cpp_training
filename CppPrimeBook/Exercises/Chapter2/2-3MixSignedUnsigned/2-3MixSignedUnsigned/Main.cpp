#include <iostream>

unsigned u = 10, u2 = 42;
int i = 10, i2 = 42;

int main()
{
	std::cout << "Expecting the result as 32.\n";
	std::cout << u2 - u << std::endl;
	
	// Este resultado acontece pq a expressao resulta num numero negativo, 
	// e o type unsigned ja diz que nao pode ter sinal, ou seja, nao pode ser negativo.
	std::cout << "Expecting the result as 42949672....\n";
	std::cout << u - u2 << std::endl;

	// Todos os types da expressao sao int.
	std::cout << "Expecting the result as 32.\n";
	std::cout << i2 - i << std::endl;
	std::cout << "Expecting the result as -32.\n";
	std::cout << i - i2 << std::endl;

	// Misturando os types. int menos unsigned. Nao quebra, pois o resultado nao e negativo.
	std::cout << "Expecting the result as 0.\n";
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	
	// Mistura unsigned com int, em ambas as ordens. int - unsigned <> unsigned - int
	// O resultado aqui fica ruim, pois a expressao termina em unsigned negativo, nao importa se o int esta envolvido na operacao.
	std::cout << "Expecting the result as 42949672....\n";
	std::cout << u - i2 << std::endl;
	std::cout << i - u2 << std::endl;

	std::cin.get();
}