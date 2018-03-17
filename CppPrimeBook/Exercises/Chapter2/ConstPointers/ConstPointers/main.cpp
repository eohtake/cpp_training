#include <iostream>

// consts precisam ser inicializados sempre, pois não podem ser alterados depois.
// A variavel number é um int normal, pode ser alterada. A variavel number2 é const e é somente leitura.
// O pointer1 é um * const apontando para um int.
// Lendo-se da direita para esquerda: pointer1 é um const pointer apontando para um int.(number)
int number = 0;
const int number2 = number; // TOP LEVEL CONST
int *const pointer1 = &number; // TOP LEVEL CONST

// A variavel constNumber é somente leitura.
// O pointer2 é um pointer que aponta para um int const. (constNumber)
const int constNumber = 42; // TOP LEVEL CONST
const int *pointer2 = &constNumber; // LOW LEVEL CONST (O pointer não é const)

// O pointer3 é um const pointer que aponta para um int const. (pointer2)
const int *const pointer3 = pointer2; // TOP LEVEL CONST

// refNumber é uma referência a um int const, de fato constNumber é declarado acima como const int.
const int &refNumber = constNumber; // LOW LEVEL CONST

// refNumber2 é uma referência a um const. Ilegal, pois a referencia não é const.
int &refNumber2 = constNumber; // LOW LEVEL CONST

// refNumber3 é uma referência a um int não const. Ambos podem ser modificados.
int &refNumber3 = number; // LOW LEVEL CONST

/* Low level const é quando uma referencia, pointer ou variavel referencia ou
 * aponta para algo que é const, mas a propria referencia ou o pointer não são const.
 *
 * Top level const é quando uma referencia, pointer ou variavel são eles mesmos const.
 */

int main()
{
    number = 5; // OK
    number2 = 10; //TOP LEVEL CONST não pode ser alterado.
    pointer1 = &number2; // TOP LEVEL CONST, este pointer não pode ser alterado.
    *pointer1 = 12; // OK, dereferencing change. The int that this pointer points to is not const.
    
    constNumber = 35; // TOP LEVEL const variable.
    *pointer2 = 35; // This pointer points to a const variable. can't change de underlying data.
    pointer2 = &number; // LOW LEVEL const. This pointer can be changed to point to another object.
    
    pointer3 = &number; // TOP LEVEL const. pointer3 can't point to another object.
    *pointer3 = &number; //pointer3 points to pointer2,that points to constNumber, a const variable.
    
    refNumber = 10; // refNumber is const hence can't change.
    
    refNumber3 = number2; // OK. Ambos não são const.
    refNumber3 = &constNumber; // Ilegal. Não se pode atribuir um const a uma referencia nao const.
    
}
