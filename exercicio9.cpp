#include <iostream>
// Escreva um programa que leia um número inteiro do usuário e verifique se é positivo e par. Imprima 1 se for positivo e par, e 0 caso contrário.

int main (){
    int a;
        printf("digite um numero: ");
        scanf("%d", &a);
        
        printf("%d\n", (a % 2 == 0) && (a > 0));
    return 0;
}