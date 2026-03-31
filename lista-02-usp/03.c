//EXERCÍCIO 2.3

#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    float res;

    printf("Escreva um valor positivo para base da potência: ");
    scanf("%d",&a);
    if(a<=0){
        printf("Valor inválido!");
        return 0;
    }
    printf("Escreva o valor do expoente: ");
    scanf("%d", &b);
    if(b<0){
        printf("Valor inválido!");
        return 0;
    }

    res = pow(a,b);
    printf("O resultado da potência de base %d e expoente %d é: %0.f \n", a,b,res);
    return 0;
}