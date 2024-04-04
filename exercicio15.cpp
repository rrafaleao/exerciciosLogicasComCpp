#include <iostream>

int main( ){
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("digite o segundo numero: ");
    scanf("%d", &b);
    if(a > b){
        printf("o primeiro número é maior que o segundo \n");
    }
    else{
        printf("o segundo número é maior que o primeiro\n ");
    }
    if(a == b){
        printf("Os dois números são iguais\n");
    }
return 0;
}