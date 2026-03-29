// EXERCÍCIO 18

#include <stdio.h>

int main(){
    int hoursOver, hoursMissed, minutesOver, minutesMissed, reward, balance;
    float h;

    printf("Inser how many hours you worked overtime: ");
    scanf("%d",&hoursOver);
    printf("Insert how many hours you missed work");
    scanf("%d", &hoursMissed);

    minutesOver = hoursOver*60;
    minutesMissed = hoursMissed*60;
    balance = minutesOver - (2/3 * minutesMissed);
    
    if(h>2400){
        reward =500;
    } else if(h>1800){
        reward=400;
    } else if(h>1200){
        reward = 300;
    } else if(h>=600){
        reward = 200;
    } else {
        reward = 100;
    }

    printf("Congratulations, you have got a R$%d,00 reward for you work",reward);
    return 0;
}