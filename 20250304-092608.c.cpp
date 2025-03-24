#include <stdio.h>

int main() {
    int HST, PH, salario;

    printf("Ingrese las horas semanales trabajadas: ");
    scanf("%d", &HST);
    
    printf("Ingrese el precio por hora: ");
    scanf("%d", &PH);
    if (HST <= 40) {
        salario = HST * PH;
    } else {
        salario =  (HST * (PH * 1.5 ));
    }
    printf("El salario semanal es: %d\n", salario);
    return 0;
}