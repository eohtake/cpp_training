#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	MultiplyAndLog(5, 2);
	MultiplyAndLog(100, 30);
	MultiplyAndLog(30, 12);
	std::cin.get();
}