/*
####              Desafio 1            ####
Faça uma calculadora onde o usuário digite dois números (reais) e no final ele exiba todas as
operações matemáticas com esses números:

*/

#include <stdio.h>

int main(){
    int num1, num2, soma , mult, sub; // numeros inteiros, mais operações inteiras
    float div;                         // operação float
    printf("Digite 2 numeros: \n"); // saida de texto
    scanf("%i %i", &num1 , &num2);  // entrada dos numeros

    soma = num1 + num2; // soma 
    sub = num1 - num2;  // subtração
    mult = num1 * num2; // multiplicação
    div = ((float)num1 / (float)num2); // divisão de numero inteiro com conversão para float
    

    printf("Operacoes Realizadas com sucesso: \n");
    printf("Soma:  %i + %i = %i \n", num1, num2 , soma); // resultado soma
    printf("Subtracao:  %i - %i = %i \n", num1, num2 , sub); // resultado subtração 
    printf("Multiplicacao:   %i * %i = %i \n", num1, num2 , mult); // resultado multiplicação
    printf("Divisao:   %i / %i = %.2f \n", num1, num2 , div); // resultado divisão
    

    return 0; // fim da main
}