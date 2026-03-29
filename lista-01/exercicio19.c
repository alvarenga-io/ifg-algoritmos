// EXERCÍCIO 19

#include <stdio.h>

int main(){
    float minWage, regularHourValue, overtimeHourValue, monthSalary, grossSalary, incomeTax, netSalary ,bonus, finalSalary, dependentsAid;
    int regularHours, overtimeHours, dependents ;

    printf("-----------------------------\n");
    printf("FILL IN YOUR INFORMATIONS\n");
    printf("Current Minimum Wage: ");
    scanf("%f",&minWage);
    printf("How many hourds you worked the present month: ");
    scanf("%d", &regularHours);
    printf("How many dependent family members you have? ");
    scanf("%d",&dependents);
    printf("How many hours you worked overtime? ");
    scanf("%d", &overtimeHours);
    printf("-----------------------------\n");

    regularHourValue = minWage/5;   //Value of each hour of work.
    monthSalary = regularHours *regularHourValue; //Calculation of value recieved by total regular hours of work.
    dependentsAid = 32 * dependents; //Additional aid calculated by number of dependents;
    overtimeHourValue = regularHourValue*1.5; //Value of each hour of overtime work;
    grossSalary = dependentsAid + (regularHours*regularHourValue)+ (overtimeHourValue*overtimeHours); //Sum of value recieved by regular hours, overtime hours and dependents aid value.

    // Calculate income tax based on the gross salary
    if(grossSalary<200){
        incomeTax = grossSalary * 0;
    } else if(grossSalary<=500){
        incomeTax = grossSalary * 0.1;
    } else if(grossSalary>500){
        incomeTax = grossSalary * 0.2;
    }

    netSalary = grossSalary - incomeTax; //Salary deducted from income tax.

    //Calculate bonus based on net salary.
    if (netSalary<=350){
        bonus = 100;
        netSalary += 100;
    } else {
        bonus = 50;
        netSalary += 50;
    }

    printf("(+)Earned: $%.2f\n", monthSalary);
    printf("(+)Dependents Additional: %.2f\n",dependentsAid);
    printf("(+)Overtime hours: $%.2f\n",overtimeHourValue*overtimeHours);
    printf("(=)Gross Salary: $%.2f\n", grossSalary);
    printf("(-)Income Tax: $%.2f\n",incomeTax);
    printf("(+)Bonus $%.2f\n", bonus);
    printf("-----------------------------\n");
    printf("Net Salary: $%.2f\n", netSalary);

    
    return 0;
}