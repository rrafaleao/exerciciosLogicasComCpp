#include <iostream>

//Escreva um programa que determine se um ano fornecido pelo usuário é bissexto ou não. Imprima 1 se for bissexto e 0 se não for.

int main(){
    int ano;
    printf("Digite um número");
    scanf("%d", &ano);
    printf("%d\n", ((ano % 4 == 0 ) && (ano % 100 != 0) || (ano % 100 == 0 ) && (ano % 400 == 0)));
}