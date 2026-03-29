// EXERCÍCIO 12

#include <stdio.h>

int main (){
	float grade, avg;
	
	for(int i=1; i<=3;i++){
		printf("Grade %d: ", i);
		scanf("%f",&grade);
		avg += grade;
	}
	avg = avg/3;
	printf("You avarege grade was: %.2f\n", avg);
	
	if(avg<7 && avg>= 0){
		printf("Reproved!");
	} else if (avg<=10){
	  printf("Aproved!");
	}
	return 0;
}
