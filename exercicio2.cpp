#include <iostream> 

//Crie um programa que leia um número inteiro do usuário e verifique se é par ou não. Imprima 1 se for par e 0 se for ímpar.

int main (){
    int num1;
    printf("Digite um número: ");
    scanf("%d", &num1);

    int num2 = 2;
    printf("%d\n", num1 % num2 == 0);

return 0;
}