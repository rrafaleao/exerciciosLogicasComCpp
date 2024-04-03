#include <iostream>

// Enunciado: Faça um programa que leia um número inteiro do usuário e verifique se é divisível por 3 e por 5.
// Imprima 1 se for divisível por ambos, e 0 caso contrário.

int main (){
    int a; 
        printf("Digite um número: ");
        scanf("%d", &a);
        printf("%d\n", (a % 3 == 0) && (a % 5 == 0));
    return 0;
    
}