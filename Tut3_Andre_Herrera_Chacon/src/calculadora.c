/**
 * Computer Engineering, Costa Rica Institute of Technology
 * CE-5303 Embedded System Instroduction
 * 
 * @file calculadora.c
 * 
 * @brief Simple calculator code, verifies library operation 
 * 
 * @author Andre Herrera Chacon
 */

#include<stdio.h>
#include<operadores.h>

int main(){

    float a = 73.0;
    float b = 42.0;

    printf("Suma de %.2f + %.2f = %.2f \n",a,b,suma(a,b));
    printf("Resta de %.2f - %.2f = %.2f \n",a,b,resta(a,b));
    printf("Multiplicacion de %.2f x %.2f = %.2f \n",a,b,multiplicacion(a,b));
    printf("Division de %.2f / %.2f = %.2f \n",a,b,division(a,b));
    printf("Raiz cuadrada de: sqrt(%.2f) = %.2f,  sqrt(%.2f) = %.2f \n",a,raizCuadrada(a),b,raizCuadrada(b));
} 
