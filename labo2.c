#include <stdio.h>
#include <math.h>

int main(void){

    //Lectura desde teclado
    int num0;

    printf("Introdusca el valor de un entero:\n");
    scanf("%d", &num0);

    printf("El valor del numero es: %d. \n",num0);

    //Operaciones basicas

    float num1 = 10.50;
    float num2 = 20;

    float suma,resta,mult,div;

    //%s para leer cadenas
    //%<any>  para leer ese tipo de datos
    printf("Introdusca el valor del num0:\n");
    scanf("%d", &num0);

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("La suma es : %f \n",suma);
    printf("La resta es : %f \n",resta);
    printf("La multiplicacion es : %f \n",mult);
    printf("La division es : %f \n",div);


    //Modulo, potencia y raiz cuadrada
    int n1,n2,division,modulo;
    printf("\n Introdusca primero numero entero: ");
    scanf("%d",&n1);
    printf("\n Introdusca segundo numero entero: ");
    scanf("%d",&n2);

    division = n1 / n2;
    modulo = n1 % n2;

    printf("\n La division es : %d",division);
    printf("\n El modulo es : %d",modulo);

    //Potencia

    float base = 2,potencia,resultado;

    printf("\nEscriba una potencia de 2: \n");
    scanf("%f",&potencia);

    resultado = pow(base,potencia);

    printf("\n El resultado es: %f." ,resultado);
    
    //Raiz cuadrada

    float numBase, resultadosqrt;
    printf("\n Introdusca el numero a sacarle raiz: ");
    scanf("%f",&numBase);

    resultadosqrt = sqrt(numBase);

    printf("\n El resultado es : %f",resultadosqrt);

    // Ejercicios

    //1 Calular Area y volumen de un circulo de radio de 5.6 unidades
    float radio = 5.6;
    float pi = 3.1416;

    float area;
    float volumen;

    volumen = (3/4)*pi*pow(radio,3);

    area = pi*pow(radio,2);

    printf("\n El area del circulo es: %f",area);
    printf("\n El volumen del circulo es: %f",volumen);


    //3
    char name[20];
    printf("\nIngrese su nombre porfavor:");
    scanf("%s", name);
    printf("Ahora estas en la matrix, %s.", name);


    return 0;
}