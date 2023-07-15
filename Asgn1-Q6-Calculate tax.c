//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Calc tax taking income as input:
//          1. If income is less than 1,50,000, then no tax.
//          2. If taxable income is in the range 150001 - 300000, then charge 10% tax.
//          3. If taxable income is in the range 300001 - 500000, then charge 20% tax.
//          4. If taxable income is above 500001, then charge 30% tax.

#include <stdio.h>

int main()
{
    //variables
    long int income;
    float tax;

    //input
    printf("Enter your income: ");
    scanf("%ld", &income);

    //calculations and output
    if(income<=150000)
    printf("Not taxable!\n");
    else if(income<=300000)
    tax = (10/100.0)*income;
    else if(income<=500000)
    tax = (20/100.0)*income;
    else
    tax = (30/100.0)*income;

    if(income>150000)
    printf("Tax applicable for your income %ld = %.2f\n", income, tax);

    return 0;
}
