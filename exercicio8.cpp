#include <iostream>

//Escreva um programa que leia três números inteiros do usuário e verifique se esses números podem formar os lados de um triângulo.
//Imprima 1 se puderem formar um triângulo e 0 se não puderem.

int main(){
    int c1, c2, h; 
        printf("digite o primeiro cateto: ");
        scanf("%d", &c1);
        printf("digite o segundo cateto: ");
        scanf("%d", &c2);
        printf("digite um digite a hipotenusa: ");
        scanf("%d", &h);

        printf("%d\n", (c1 + c2 > h == 0) || (c1 + c2 < h != 0));
    return 0;

}