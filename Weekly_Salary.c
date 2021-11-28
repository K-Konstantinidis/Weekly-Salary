/*************************************************************************
	Copyright © 2021 Konstantinidis Konstantinos

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at 

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software 
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and 
	limitations under the License.
*************************************************************************/
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
