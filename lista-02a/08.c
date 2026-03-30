#include <stdio.h>

int main() {
    int numeros[4];
    int i, j, aux;


    printf("Digite quatro numeros inteiros:\n");
    for (i = 0; i < 4; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (numeros[i] > numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    printf("\nA) Ordem crescente: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nB) Ordem decrescente: ");
    for (i = 3; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    return 0;
}