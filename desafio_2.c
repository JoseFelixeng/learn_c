/*
Desafio 2
Faça uma calculadora na qual o programa peça dois números e depois uma operação (a escolha deve
ser entre soma e subtração).
*/



#include <stdio.h>

int main(){
    int num1, num2, soma, sub,res ;  // Variaveis usadas no programa
    char op;

    printf("Digite 2 numeros: \n"); // tela pedindo as informações inciais
    printf("Digite uma operacao [+ / -] \n "); // operação que ser usada no exemplo
    scanf("%i %i %c", &num1, &num2, &op); // função usada para escanear os dados de entrada 

    res = (op == '+' )? num1 + num2 : num1 - num2; // operação usando operador ternario

    printf("Resultado da operacao desejada: \n");

    printf("A %s entre %i e %i = %i", (op == '+')?"soma" : "subtracao", num1, num2, res); // resultado encontrado



    return 0;
}