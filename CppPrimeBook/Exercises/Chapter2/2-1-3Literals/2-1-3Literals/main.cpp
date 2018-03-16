#include <iostream>

int month = 10;

int x = 1;
int y = 3;

// Dividindo dois inteiros que resultam em um número com casas decimais, o resultado mostrado é zero.
// Para mostrar o resultado com exatidão, fazemos um typecasting, que é converter um tipo por outro.
// Aqui convertemos um int por um float e o resultado é 0.3333.
float result = static_cast<float>(x) / static_cast<float>(y);

int main()
{
    std::cout << "2\115\n" << std::endl;
    std::cout << "2\t\115\n" << std::endl;
    
    std::cout << 1.024f << std::endl;
    
    std::cout << result << std::endl;
    
    return 0;
}
