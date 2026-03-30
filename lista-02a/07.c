// EXERCÍCIO 07
#include <stdio.h>
#include <stdbool.h>

int main() {
    int limite, i, j, totalPrimos = 0;
    bool primo;

    printf("Digite um número: ");
    scanf("%d", &limite);

    printf("\nNúmeros primos no intervalo de 1 a %d:\n", limite);

    for (i = 2; i <= limite; i++) {
        primo = true;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            printf("%d ", i);
            totalPrimos++;
        }
    }

    printf("\n\nQuantidade total de números primos: %d\n", totalPrimos);

    return 0;
}