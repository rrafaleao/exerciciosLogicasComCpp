#include <iostream> 

//Faça um programa que leia um número inteiro do usuário e verifique se é positivo. Imprima 1 se for positivo e 0 se for negativo.

int main(){
int a; 
    printf("digite um numero: ");
    scanf("%d", &a);
    int b = 2;

    printf("%d\n", a % b == 0);

return 0;
}