#include <iostream> 

//Faça um programa que receba três notas e seus respectivos pesos do usuário, e calcule a média ponderada dessas notas.

int main (){
    float n1, p1, n2, p2, n3, p3;
        printf("digite a primeira nota: ");
        scanf("%f", &n1);
        printf("digite o primeiro peso: ");
        scanf("%f", &p1);

        printf("digite a segunda nota: ");
        scanf("%f", &n2);
        printf("digite o segundo peso: ");
        scanf("%f", &p2);

        printf("digite a terceira nota: ");
        scanf("%f", &n3);
        printf("digite o terceiro peso: ");
        scanf("%f", &p3);

        float calculo = ((n1 * p1) + (n2 * p2) + (n3 * p3) / (p1 + p2 + p3));

        printf("o peso da nota é : %.2f\n", calculo);
    return 0;

}