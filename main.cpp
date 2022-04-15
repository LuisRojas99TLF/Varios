#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);
double fun(double x);

int main (int argc, char **argv) // el main realiza calculos pero nunca los imprime en pantalla o en un archivo
{
    int ii = 0; //Codigo mal identado, se puede dar el valor a la variable directamente
    int jj = -1; //Codigo mal identado, se puede dar el valor a la variable directamente
    foo(ii, jj);    //Codigo mal identado
    std::cout << foo(ii, jj) << "\n"; //temporal
    foo(jj, ii);  //Codigo mal identado
    std::cout << foo(jj, ii) << "\n"; //temporal
    //baz(25.9);  //Codigo mal identado
    std::cout << baz(25.9) << "\n"; //temporal
    return EXIT_SUCCESS;    //Codigo mal identado
}

int foo(int a, int b)
{ 
    return a/b + b/bar(a, b) + b/a; //Codigo mal identado, al dividir valores int se generan respuestas truncadas
}
int bar(int a, int b)   //Codigo mal identado
{
    int c = std::abs(a);    //Codigo mal identado, . Se recomienda no hacer uso de unsigned int, es preferible usar un valor absoluto
    return c + a - b;   //Codigo mal identado
}
double baz(double x)
{
    if (x == 0){ //Codigo mal identado, uso equivocado de if, faltan los { y }., El if nunca va a ser usado. Se le esta asignando el valor de 0 a x, no se esta comparando
        double v = 1-(x+1); //Codigo mal identado
    }

    return std::sqrt(x); //Codigo mal identado, falta un punto y coma
}