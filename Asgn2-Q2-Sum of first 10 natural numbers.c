//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Write a C program to compute the sum of the first 10 natural numbers.
#include <stdio.h>

int main()
{
    //var
    int i, sum;

    //init
    sum = 0;

    //calc
    for(i=1; i<=10; i++)
    {
        sum = sum + i;
    }

    //otp
    printf("sum = %d\n", sum);
    return 0;
}
