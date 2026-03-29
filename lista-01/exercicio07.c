// EXERCÍCIO 07 

#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    char categoria[20];

    printf("----------------------------\n");
    printf("1 - 5 a 7 anos\n");
    printf("2 - 8 a 10 anos\n");
    printf("3 - 11 a 13 anos\n");
    printf("4 - 14 a 17 anos\n");
    printf("5 - maiores de 18 anos\n");
    printf("----------------------------\n");

    printf("Qual é a sua faixa etária? ");
    scanf("%d", &idade);


    switch (idade)
    {
    case 1:
        strcpy(categoria, "Infantil A");
        break;
    case 2:
        strcpy(categoria, "Infantil B");
        break;
    case 3:
        strcpy(categoria, "Juvenil A");
        break;
    case 4:
        strcpy(categoria, "Juvenil B");
        break;
    case 5:
        strcpy(categoria, "Senior");
        break;
    default:
        break;
    }

    printf("Sua categoria é: %s \n", categoria);
    return 0;
}