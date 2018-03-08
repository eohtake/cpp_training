#include <iostream>

/* Neste exercicio é demonstrado como se inicializa variaveis dentro de uma classe.
* Ao instanciar uma classe, as variáveis nao inicializadas em memoria automaticamente.
* O programador tem duas opcoes: 
* 1-Inicializar atribuindo valores como 0 dentro da classe: X = 0, Y = 0
* 2-Criar um construtor dentro da classe que é executado toda as vezes que a classe é instanciada.
*
* O construtor pode ser criado atribuindo-se valores, ou recebendo parametros, assim o programador podera
* enviar os parametros no momento da instanciacao da classe.
* O construtor é como se fosse uma funçao especial com o mesmo nome da classe.
*/

class Entity
{
public:
	float X, Y;
	
	// Construtor inicializando as variaveis em zero.
	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
	}

	// Construtor inicializando e recebendo parametros.
	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	// A memoria não é limpa automaticamente. 
	// Portanto é preciso utilizar um destructor que é executado após o término do codigo da classe.
	~Entity()
	{
		std::cout << "Entity Destroyed!" << std::endl;
		std::cin.get();
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

int main()
{
	// Aqui criamos uma instancia da classe Entity sem tocar nas variaveis.
	// Imprime as variaveis inicializadas com zero, por conta do construtor.
	Entity e;
	e.Print();

	// Aqui modificamos a variavel da instancia e ela aceita. O Y ainda mantem o que o construtor definiu.
	e.X = 1.2f;
	e.Print();

	// Aqui instanciamos a mesma classe, mas desta vez passando os parametros para a inicializacao.
	Entity e_Parametrizado(1.5f, 3.9f);
	e_Parametrizado.Print();

	std::cin.get();
}