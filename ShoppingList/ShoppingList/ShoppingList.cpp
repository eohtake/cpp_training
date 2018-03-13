#include <iostream>

int apples;
int oranges;
int cherries;
int watermelons;
double wallet = 100;
float userchoice;

int main()
{
	while (wallet >= 0)
	{
		std::cout << "======== Welcome to Frutolandia! ========\n\n\n";
		std::cout << "############ MENU ############\n\n";
		std::cout << "1.   Apples        $2\n";
		std::cout << "2.   Oranges       $3\n";
		std::cout << "3.   Cherries      $5\n";
		std::cout << "4.   Watermelons   $8\n\n";
		std::cout << "----------------------------\n";
		std::cout << "Your basket:\n\n";
		std::cout << apples << " Apples\n" << oranges << " Oranges\n" << cherries << " Cherries\n" << watermelons << " Watermelons\n\n";
		std::cout << "----------------------------\n";
		std::cout << "Your available credit is $" << wallet << "\n\n";
		std::cout << "Choose the fruit by its menu number, 5 to checkout or 6 to exit:\n";
		std::cin >> userchoice;

		if (userchoice == 1) {
			apples++;
			wallet = wallet - 2;
		}

		if (userchoice == 2) {
			oranges++;
			wallet = wallet - 3;
		}

		if (userchoice == 3) {
			cherries++;
			wallet = wallet - 5;
		}

		if (userchoice == 4) {
			watermelons++;
			wallet = wallet - 8;
		}

		if (userchoice == 5) {
			std::cout << "Thank you for your shopping!\n\n";
			std::cin.get();
			return 0;
		}
		
	}
	
	std::cin.get();
}