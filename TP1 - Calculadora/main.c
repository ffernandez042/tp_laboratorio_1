#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    float num1, num2, resultado;
    float r1, r2;

    printf("-----------CALCULADORA----------- \n");

        printf("Ingrese el primer operador: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo operador: ");
        scanf("%f", &num2);


        //SUMA
            resultado = SUMA(num1,num2);
            printf("La suma de %.2f y %.2f es: %.2f\n",num1,num2,resultado);

        //RESTA
            resultado = RESTA(num1,num2);
            printf("La resta de %.2f y %.2f es: %.2f\n",num1,num2,resultado);

        //MULTIPLICACION
            resultado = MULTIPLICACION(num1,num2);
            printf("La multiplicacion entre %.2f y %.2f es: %.2f\n",num1,num2,resultado);

        //DIVISION
            if(!num2==0){   //Validacion, si es que el usuario quiere dividir por 0
            resultado = DIVISION(num1,num2);
            printf("La division entre %.2f y %.2f es: %.2f\n",num1,num2,resultado);
                }else{
                printf("No es posible dividir por 0");
                }

        //FACTORIAL
            r1 = factorial(num1);
            r2 = factorial(num2);
            printf("El Factorial de %.2f es: %.2f y El Factorial de %.2f es: %.2f",num1,r1,num2,r2);





}
