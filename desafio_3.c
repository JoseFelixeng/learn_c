/*
Desafio 3
Faça um programa que leia 3 números e diga quantos deles são ímpares ou pares e quantos deles
são divisíveis por 3 (se divididos por 3 o resto tem que ser 0).

Obs: para evitar lixo de memoria o ideal é inicializar as variaéis com 0.

Digite 3 números: 2 1 3
2 são ímpares, 1 é par e 1 é divisível por 3
Você

*/

#include <stdio.h>

int main(){
    int num1, num2, num3, par = 0 , impar = 0, divp3 = 0; // Criando e inicializando as variaveis
    
    // Entrada de Dados 

    printf("Digite 3 numeros: \n");
    scanf("%i %i %i",&num1, &num2, &num3);

    //fazendo os testes usando as operadores tenarias

    (num1 % 2 == 0 )? par++ : impar++; //teste se  o numero 1 é impar caso contrario é par
    (num2 % 2 == 0 )? par++ : impar++; //teste se  o numero 2 é impar caso contrario é par
    (num3 % 2 == 0 )? par++ : impar++; //teste se  o numero 3 é impar caso contrario é par

    (num1 % 3 == 0 )? divp3++ : divp3; // testando a primeira entrada, se é multiplo de 3
    (num2 % 3 == 0 )? divp3++ : divp3; // testando a segunda entrada, se é multiplo de 3
    (num3 % 3 == 0 )? divp3++ : divp3; // testando a terceira entrada, se é multiplo de 3

    printf("Digite 3 numeros: %i %i %i \n" , num1, num2, num3); // Mostrando os Numeros inseridos  
    printf("%i sao impares, %i e par e %i e divisivel por 3", impar, par, divp3); //  Mostrando a saida
    
    return 0; // fim
}