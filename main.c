/**
 * Tipo de dato en C
 * @author Néstor Aldana <naldana@uca.edu.sv>
 * @date 30/08/2021
 **/
#include <stdio.h>

int main(void) {
    char caracter = 'A';
    short corto = 1;
    int entero = 0;
    float decimal = 5.5;
    double decimalG = 5.4;
    long grande = 30;
    long double decimalGG = 10;

    printf("Caracter %c\n", caracter);
    printf("Entero %d\n", entero);
    printf("corto %d\n", corto);
    printf("decimal %f", decimal);
    printf("decimalG %lf\n", decimalG);
    printf("grande %ld\n", grande);
    printf("decimalgg %LF\n", decimalGG);

    //
    // Imprima todos los tipos de datos faltantes

    return 0;
}