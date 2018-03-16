#include <iostream>


int main()
{
	int value = 1024; // original
	int valueSister = value; // copy
	int &valueBrother = value; // reference (alias)
	int valueFromReference = valueBrother; // copy the value from the alias, which is the original 1024.
	
	std::cout << "This is the original: " << value << std::endl;
	std::cout << "This is a copy: " << valueSister << std::endl; // Copy of the value. Actually this has a different new memory address.
	std::cout << "This is a reference: " << valueBrother << std::endl; // This is an alias to value. The operations made here are made in the original.
	
	valueSister = 1025; // copy of value. Different memory address.
	value = 1026; // Original, 1026 will never get printed out, because the alias below will change it to 1027.
	valueBrother = 1027; // reference to value, same memory address.
	valueFromReference = 1030; // A value contained in a reference was assigned to this variable, which makes it an independent copy.

	std::cout << "This is the original: " << value << std::endl;
	std::cout << "This is a copy: " << valueSister << std::endl;
	std::cout << "This is a reference: " << valueBrother << std::endl;
	std::cout << "This is a value assigned variable from a reference: " << valueFromReference << std::endl;

	/*********************************************************************/

	int i, &ri = i; // Mesmo que a variavel nao esteja inicializada, ja eh possivel criar uma refencia a ela. So nao pode criar referencia sem objeto.
	i = 5; ri = 10;

	std::cout << i << " " << ri << std::endl;
	
	/*********************** Pointers **************************/

	int aValue = 15;
	int *aValuePointer = &aValue; // Get the address of the aValue reference
	int *aValuePointer2 = aValuePointer; // Copies the address of the original pointer.
	
	std::cout << "This is the address of aValue: " << aValuePointer << std::endl;
	std::cout << "This is the value contained at that memory address: " << *aValuePointer << std::endl; // Dereference the pointer to get its content.
	std::cout << "This is the value contained at that memory address: " << *aValuePointer2 << std::endl; // Dereference the pointer to get its content.

	*aValuePointer = 20; // Dereference and assign a new number to the object at that memory address.

	std::cout << "This is the value contained at that memory address: " << *aValuePointer << std::endl; // Dereference the pointer to get its content.

	// Exercicio

	int numero = 42; // cria e inicializa a variavel int em 42
	int *pointer1 = &numero; // cria pointer referenciando o endereco de memoria da variavel numero
	*pointer1 = *pointer1 * *pointer1; // dereference o pointer1 para fazer reassign, e multiplica o conteudo por si mesmo, dereferenciando tambem.
	std::cout << "Multiplica conteudo de onde este pointer aponta: " << *pointer1 << std::endl; // dereference para exibir o novo conteudo do address.
	std::cout << "Endereco da memoria: " << pointer1 << std::endl;

	// Por que a inicializacao de pointerNumInt e legal e *longPointer nao?
	int numInt = 30;
	void *pointerNumInt = &numInt;
	long *longPointer = &numInt; // error C2440: 'initializing': cannot convert from 'int *' to 'long *'
	// Resposta: Objetos do tipo void* pode receber referencia de qualquer tipo. O pointer *longPointer so pode receber long, e passamos int reference.
	std::cin.get();
}