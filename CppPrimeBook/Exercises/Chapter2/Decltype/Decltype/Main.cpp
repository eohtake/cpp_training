#include <iostream>

/* decltype ajuda a atribuir um tipo automaticamente. 
* A expressao e avaliada e baseada nela, atribui o tipo a variavel.
*/

// Declaramos uma funcao como auto, que retorna um int.
// POderiamos ter explicitado o tipo da funcao tambem: int Function()...
auto Function() {
	 return 10;
}

// Aqui utilizamos a palavra chave decltype e dentro dela a nossa funcao acima.
// Logo depois declaramos a variavel e atribuimos 1. Repare que nao definimos explicitamente o tipo.
// Com decltype o compilador vai checar o que retorna a Funcao() e atribui a variavel sum o mesmo tipo retornado por Funcao().
// Neste caso sum vira um int.
decltype(Function()) sum = 1;

// Funciona tambem com outras variaveis declaradas, nao apenas com funcao.
const int constantInt = 0, &constantReference = constantInt;
decltype(constantInt) x = 0; // Aqui basicamente estamos dizendo para copiar o tipo de constantInt e atribuir a x.

decltype(constantReference) y = x; // Neste caso a mesma coisa, y vai ter o mesmo tipo de constantReference e tera valor de x.
//decltype(constantReference) z; Ilegal. Por estar copiando um tipo de uma referencia, z precisa ser inicializado.

int main()
{
	Function();
	std::cout << sum << "\n";
	
	std::cout << x << "\n";
	std::cout << constantInt << "\n";
	std::cout << &constantReference << "\n";
	std::cout << y << "\n";

	std::cin.get();

}