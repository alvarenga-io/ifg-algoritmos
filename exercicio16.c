//EXERCÍCIO 16

#include <stdio.h> 
#include <string.h>

int main(){
    int age;
    char riskLevel[20];

    printf("Insert client's age: ");
    scanf("%d",&age);

    if(age>18 && age<25){
        strcpy(riskLevel,"Low");
    } else if(age >24 && age<=41){
        strcpy(riskLevel,"Medium");
    } else if(age>40 && age <70) {
        strcpy(riskLevel,"High");
    } else {
        printf("Client not qualified to obtain an insurance policy\n");
        return 0;
    }

    printf("Client presents a %s risk level\n",riskLevel);
    return 0;

}