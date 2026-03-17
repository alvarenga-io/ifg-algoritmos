//EXERCÍCIO 13

#include <stdio.h>
#include <string.h>

int main(){
	int age;
	char ageGroup[20];
	
	printf("Insert your age: ");
	scanf("%d",&age);
	
	if(age>0 && age <2) {
		strcpy(ageGroup,"Newborn");
	} else if (age<11){
		strcpy(ageGroup,"child");
	} else if (age <19){
		strcpy(ageGroup,"Adolescent");
	} else if (age<55){
		strcpy(ageGroup,"Adult");
	} else {
		strcpy(ageGroup,"Elder");
	}
	printf("\nYou are a/an %s", ageGroup);
	return 0;
}
