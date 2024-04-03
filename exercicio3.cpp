#include <iostream>
//Escreva um programa que receba três números reais do usuário e imprima a média deles.

int main (){
    float num1, num2, num3;
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite um número: ");
    scanf("%f", &num2);
    printf("Digite um número: ");
    scanf("%f", &num3);

    float soma = num1 + num2 + num3;
    float divisao = soma / 3;

    printf("a média dos números é: %.2f\n",  (soma / 3));
    return 0;
}