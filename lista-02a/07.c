// EXERCÍCIO 2.7

#include <stdio.h>

int main(){
    int primo = 1,num, count = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Numeros primos no intervalo de 1 a %d \n", num);
    printf("-------------------------------------------------\n");
    for(int i = 2; i<=num; i++){
        primo = 1;
        for(int j = 2; j<i; j++){
            if (i%j == 0){
                primo = 0; 
                break; 
            } 
            
        }
        
        if(primo == 1){
            count ++;
            printf("%d ...", i);
        }
    }
    printf("\n-------------------------------------------------\n");
    printf("\nContagem de numeros primos no intervalo: %d\n", count);

    return 0;
}

