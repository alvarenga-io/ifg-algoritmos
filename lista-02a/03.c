//EXERCÍCIO 03 

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    int aleatorio, valorUser ;
    int min = 0, max = 10;

    srand(time(NULL));
    aleatorio = min + (rand() % (max - min + 1));

    printf("\n------------------------------------------------\n");
    printf("ADIVINHE O NÚMERO SECRETO\n");
    printf("Escolha um número: ");
    scanf("%d", &valorUser);
    printf("\n------------------------------------------------\n");
    if(valorUser != aleatorio){
        do{
            printf("Infelizmente você não acertou dessa vez \n");
            if (valorUser<aleatorio){
                printf("Tente um valor maior...");
            } else {
                printf("Tente um valor menor...\n");
            }
            printf("\nNovo número: ");
            scanf("%d", &valorUser);
            printf("\n------------------------------------------------\n");
        } while(valorUser != aleatorio);
    }
    printf("Parabéns, você acertou!\n");
    printf(R"(▕▔╲┊┊┊┊┊┊┊┊┊╱▔▏
                ┊╲┈╲╱▔▔▔▔▔╲╱┈╱
                ┊┊╲┈╭╮┈┈┈╭╮┈╱┊
                ┊┊╱┈╰╯┈▂┈╰╯┈╲┊
                ┊┊▏╭╮▕━┻━▏╭╮▕┊
                ┊┊╲╰╯┈╲▂╱┈╰╯╱┊
        )");
    return 0;
}