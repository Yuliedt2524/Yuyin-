#include <stdio.h>
#include <stdlib.h>
int main() {
    double resultado;
    double a= 2.0 - (1.0 / 4.0);
    double b= 1.0 + (1.0 / a);
    double c = 2.0 / b;
    resultado = 5.0 + (2.0 / c);
    
    printf("%.2f\n", resultado);

    return 0;
}