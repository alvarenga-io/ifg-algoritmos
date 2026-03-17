// EXERCÍCIO 8

#include <stdio.h>


int main (){
	float lab, av, exame, media;
	char conceito;
	
	printf("----------------------\n");
	printf("Digite as notas do aluno\n");
	printf("Laboratório: ");
	scanf("%f",&lab);
	printf("Av. Semestral: ");
	scanf("%f", &av);
	printf("Exame Final: ");
	scanf("%f",&exame);
	printf("----------------------\n");
	
	media = ((lab*2) + (av*3) + (exame *5))/10;
	printf("Media Final: %.2f\n", media);
	
	if(media<10 && media>8){
		conceito = 'A';
	} else if (media>7){
		conceito = 'B';
	} else if (media>6){
		conceito = 'C';
	} else if (media>5){
		conceito = 'D';
	} else if (media >=0){
		conceito = 'E';
	} else {
		printf("Nota inválida. Tente Novamente!");
		return 0;
	}
	printf("Conceito %c",conceito);
	
	return 0;
}
