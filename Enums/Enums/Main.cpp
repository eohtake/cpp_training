#include <iostream>

// Enums e um tipo definido pelo usuario que enumera uma lista de constantes.
// A numeracao pode ser automatica, ou declarada, como no enum Example abaixo.
// Se a enumeracao nao for definida na declaracao, os inteiros atribuidos partem de 0.
// Tambem e possivel enumerar apenas uma constante, e o CPP continua a contagem a partir dali.

enum Example : unsigned char  // enum sao por padrao 32bits integer, porem neste caso podemos usar apenas 8. Definindo o tipo unsigned char.
{
	a = 1, b = 2, c = 3
};

// No exemplo abaixo, B = 6, C = 7.
enum Example2 { A = 5, B, C };

// No exemplo abaixo, autumn = 0 e summmer = 3.
enum Seasons : unsigned char
{
	autumn, winter, spring, summer 
};

enum Weekdays : unsigned char
{
	sunday, monday, tuesday, wednesday, thursday, friday, saturday
};

enum Kombinis : unsigned char { seven, family, lawson, sunkys };

int main()
{
	// Aqui podemos declarar a variavel today do tipo Weekdays
	Weekdays today;
	// So podemos setar de acordo com o que esta disponivel no enum Weekdays.
	today = wednesday;
	// Se tentarmos mudar a variavel para algo que nao faz parte do enum o compilador reclama com o erro:
	//  error C2065: 'banana': undeclared identifier
	// today = banana;

	std::cout << today << std::endl;

	Seasons estacao;
	Kombinis loja;

	estacao = winter;
	loja = lawson;

	std::cout << loja << std::endl;
	std::cout << estacao << std::endl;

	std::cin.get();
}
