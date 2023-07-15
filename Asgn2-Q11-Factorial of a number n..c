//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Find the factorial of a number n taken as input.
#include <stdio.h>

int main()
{
    //var and init
    int i, n, factorial = 1;

    //inp
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //calc
    for(i=n; i>1; i--)
    {
        factorial*=i;
    }

    //otp
    printf("Product = %d\n", factorial);
    return 0;
}
