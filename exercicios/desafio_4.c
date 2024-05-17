/*
Desafio 4
Faça um programa que leia 3 números e diga qual é o maior e qual é o menor, e se a pessoa digitar
números iguais, ele tem que avisar “foram digitados números iguais”.

Saída:
Digite 3 números:2
3
3
O número 1 é o menor
O número 3 é o maior
foram digitados números iguais

*/

#include <stdio.h>

int main(){
    int n1, n2, n3; //variaveis do Programa
    
    //Entrada do Programa

    printf("Digite 3 numeros: \n");
    scanf("%i %i %i", &n1, &n2, &n3);

    printf("Digite 3 numeros: %i, %i , %i, \n", n1, n2, n3);
    (n1 > n2 && n1 > n3)?  printf("Esse numero e o maior %i \n", n1): (n2 > n3)? printf("Esse numero e o maior %i \n", n2): printf("Esse numero e o maior %i \n", n3);
    (n1 < n2 && n1 > n3)?  printf("Esse numero e o menor %i \n", n1): (n2 < n3)? printf("Esse numero e o menor %i \n", n2): printf("Esse numero e o menor %i \n", n3);
    (n1 == n2 || n2 == n3 || n1 == n3)? printf("Existe numeros iguais \n"):  printf("Nao existe números iguais \n");
   


    
    return 0; // Fim
}