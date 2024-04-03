#include <iostream> 

//Escreva um programa que leia um número inteiro representando a quantidade de horas e converta esse valor para segundos.

int main (){
    int h;
        printf("digite quantas horas você quer converter para segundos: ");
        scanf("%d", &h);
        int s = (h * 60 * 60);
        printf("%d\n", s); 
    return 0;
}