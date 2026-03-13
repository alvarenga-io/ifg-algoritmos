#include <stdio.h>

int main(){
	float n1,n2,n3,n4,avg  ;
	
	printf("Nota 1: ");
	scanf("%f",&n1);
	printf("\nNota 2: ");
	scanf("%f",&n2);
	printf("\nNota 3: ");
	scanf("%f",&n3);
	printf("\nNota 4: ");
	scanf("%f",&n4);
	
	avg = (n1+n2+n3+n4)/4;
	printf("\nMedia: %.2f", avg);
	
	if(avg>=7){
		printf("\nAluno Aprovado!");
	} else {
		printf("\nAluno Reprovado!");
	}
	
	return 0;
}
