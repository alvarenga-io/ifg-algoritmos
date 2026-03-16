#include <stdio.h>

int main(){
    float altura;
    char sexo;
    float pesoIdeal;

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Sexo(m/f): ");
    scanf(" %c",&sexo);

    if(sexo=='f'){
        pesoIdeal = (63.1*altura)-44.7;
    }else if(sexo=='m') {
        pesoIdeal = (72.7*altura)-58;
    } else {
        printf("Sexo inválido, selecione m ou f !");
        return 0;
    }
    printf("Seu peso ideal é: %.2f", pesoIdeal);

    return 0;
}