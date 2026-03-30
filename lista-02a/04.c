// EXERCÍCIO 14

#include <stdio.h>

int main (){
    int num, count = 0, soma = 0, maior = 0, menor, media, aux;
    printf("\n------------------------------------------------\n");
    printf("ANALISE DE NÚMEROS");   
    printf("\n------------------------------------------------\n");
    printf("Digite quantos números quiser\n");
    printf("Ao digitar 0 digitação não será mais possível e a análise será exibida\n");
    
    printf("Digite abaixo: ");  
    do {
        scanf("%d ", &num);
        soma += num;
        
        
        if (num>maior){
            maior = num;
        }

       count +=1;
    } while(num != 0);
    count = count -1;

    
    printf("Soma: %d\n", soma);
    printf("Quantidade: %d\n", count);
    printf("Média: %d\n", soma/count);
    printf("Maior: %d\n", maior);
    // printf("Menor: %d\n", menor);

    return 0;
}