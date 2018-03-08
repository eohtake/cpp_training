#include <iostream>

/* Class Inheritance
* Aqui criamos duas classes, Car e CarPlus. A classe car possui funcionalidades basicas que todo carro tem.
* A classe CarPlus � criada, herdando todas as funcionalidades basicas de Car, possui alguns adicionais.
* Esta tarefa serve para demonstrar que heran�a � importante para reaproveitar c�digo e estender funcionalidades de classes ja existentes.
*/

class Car
{
public:
	bool engineStarted = false;
	bool carStopped = true;

	void Start()
	{
		engineStarted = true;
		std::cout << "The engine has been started!" << std::endl;
	}

	void Move()
	{
		carStopped = false;
		std::cout << "The car started moving!" << std::endl;
	}

	void Stop()
	{
		carStopped = true;
		std::cout << "The car stopped!" << std::endl;
	}

	void Off()
	{
		engineStarted = false;
		std::cout << "The engine now is off!" << std::endl;
	}
};

// A classe CarPlus � criada e estende a classe Car. Ela � do tipo Car.
class CarPlus : public Car
{
public:
	bool nitroStart = false;
	bool autoDrive = false;

	
	void NitroStart()
	{
		nitroStart = true;
		std::cout << "Nitro system engaged!!" << std::endl;
	}

	void AutoDrive()
	{
		autoDrive = true;
		std::cout << "Sit back and relax. Autodrive engaged!" << std::endl;
	}
};

int main()
{
	Car car; // Criamos uma instancia de Car.
	car.Start();
	car.Move();
	car.Stop();
	car.Off();
	//car.NitroStart(); Se tentarmos usar um metodo da classe CarPlus aqui, o compilador reclama, ja que ela faz parte apenas da classe CarPlus.

	CarPlus betterCar; // Criamos uma instancia de CarPlus.
	betterCar.Start(); // Este � um dos m�todos que s� foram criados na classe Car, por�m est�o dispon�veis em CarPlus j� que esta herdou os m�todos de Car.
	betterCar.Move();
	betterCar.NitroStart();
	betterCar.AutoDrive();
	betterCar.Stop();
	betterCar.Off();

	std::cin.get();

}