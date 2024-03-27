#include <iostream>

//Faça um programa que receba dois números inteiros do usuário e imprima a soma desses números.

int main (){ 
    int a, b;
    printf ("Digite o primeiro número: ");
    scanf ("%d", &a);
    printf ("Digite o segundo número: ");
    scanf ("%d",&b);

    int soma = a + b;

    printf("sua soma é: %d + %d = %d/n", a, b, soma);
return 0;
}