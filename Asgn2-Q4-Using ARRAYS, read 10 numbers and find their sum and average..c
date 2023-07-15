//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Write a program in C to read 10 numbers from the keyboard and find their sum and average. ( USE ARRAY )

#include <stdio.h>

int main()
{
    //var & init
    int num[9], i, sum = 0;
    float avg;

    //inp
    for(i=0; i<10; i++)
    {
        printf("Enter number-%d: ", i+1);
        scanf("%d", &num[i]);
    }

    //calc
    for(i=0; i<10; i++)
    {
        sum = sum + num[i];
    }
    avg = sum/10.0;

    //otp

    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
