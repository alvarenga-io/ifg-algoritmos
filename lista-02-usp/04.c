// EXERCÍCIO 2.4

#include <stdio.h>
#include <math.h>
// divisores de um número são valores cujo resultado da divisão pelo número terá um resultado inteiro
int main(){
    int resto, soma = 0, n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("Divisores:");
    for(int i = 1; i<=n; i++){
        resto = n % i;
        if(resto == 0){
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma dos divisores de %d: %d\n", n, soma);
    return 0;
}