// EXERCÍCIO 08

#include <stdio.h>

int main(){
    int numeros[4], aux, i = 0;
    printf("Digite 4 numeros: \n");

    for(i = 0; i<4; i++){
        printf("Numero %d: ", i +1);
        scanf("%d", & numeros[i] );
    }

    for(i =0; i<4; i++){
        for(int j = i + 1; j <4; j++){
            if(numeros[j]>numeros[i]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    printf("\nOrdem crescente\n");
    for (i =3; i>=0; i--){
        printf("%d ", numeros[i]);
    }
    printf("\nOrdem decrescente:\n");
    for(i=0; i<4; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}