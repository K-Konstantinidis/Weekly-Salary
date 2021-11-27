#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
    long code;
    double yearSalary, weekPayment, paymentPerHour;
    int workHourWeek;

    printf("If employee code >= 1000, then they will have an annual salary, \nelse you will insert the payment per hour.");
    printf("\nInsert employee code: ");
    code = GetLong();
    if(code >= 1000){
        printf("Insert annual salary: ");
        yearSalary = GetReal();
        weekPayment = yearSalary / 52;
        printf("The weekly payment is: %g\n", weekPayment);
    }
    else{
        printf("Insert the weekly hours of work: ");
        workHourWeek = GetInteger();
        if(workHourWeek <= 40){
            printf("Insert the payment per hour: ");
            paymentPerHour = GetReal();
            weekPayment = workHourWeek * paymentPerHour;
        }
        else{
            printf("Insert the payment per hour: ");
            paymentPerHour = GetInteger();
            weekPayment = workHourWeek * paymentPerHour + (workHourWeek - 40) * 0.5 * paymentPerHour;
        }
        printf("The weekly payment is: %g\n", weekPayment);
    }

    system("PAUSE");
}
