#include <iostream> 

// Escreva um programa que receba a base e a altura de um triângulo do usuário e calcule a área desse triângulo.

int main(){
    int a, b;
        printf("digite a altura do Triangulo: ");
        scanf("%d", &a);
        printf("digite a base do Triangulo: ");
        scanf("%d", &b);

        printf("a área do seu triangulo é: %d\n", (a * b / 2));
    return 0;
}