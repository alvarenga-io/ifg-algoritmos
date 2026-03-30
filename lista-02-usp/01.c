// EXERCÍCIO 2.1

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    for(int i= 1; i<=n; i++){
        printf("%d ao quadrado é: %0.f\n", i, pow(i,2));
    }
    return 0;
}