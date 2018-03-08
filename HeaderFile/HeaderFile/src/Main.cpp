#include <iostream>
#include "Log.h"

using namespace std;

int main()
{
	int a = 5;
	a++;
	const char* texto = "Puta que pariu!";

	for (int i = 0; i < strlen(texto); i++)
	{
		const char c = texto[i];
		cout << c << endl;
		
	}

	Log("Hello Header!");
	cin.get();
}