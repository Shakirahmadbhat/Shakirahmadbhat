//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Write a C program to display n terms of odd natural numbers and their sum.
#include <stdio.h>

int main()
{
    //var and init
    int n, i, sum=0;

    //inp
    printf("Enter n: ");
    scanf("%d", &n);

    //calc && otp
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            n = n + 1;
        }
        else
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum = %d\n", sum);
    return 0;
}
