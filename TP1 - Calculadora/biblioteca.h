#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int SUMA (float num1, float num2)
    {
        float resultado;
        resultado = num1 + num2;
        return resultado;
    }

int RESTA (int num1, int num2)
    {
        int resultado;
        resultado = num1 - num2;
        return resultado;
    }
int MULTIPLICACION (int num1, int num2)
    {
        int resultado;
        resultado = num1 * num2;
        return resultado;
    }
float DIVISION (float num1, float num2)
    {
        float resultado;
        resultado = num1 / num2;
        return resultado;
    }


float factorial(int n)
    {
        float resultado;
        if(n==1)
        return 1;
        resultado=n* factorial(n-1);
        return resultado;
    }

#endif // BIBLIOTECA_H_INCLUDED
