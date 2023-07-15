//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Find sum of series: 1 2 3 4 5 .... n
#include <stdio.h>

int main()
{
    //var and init
    int i, n, sum = 0;

    //inp
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //calc
    for(i=1; i<=n; i++)
    {
        sum+= i;
    }

    //otp
    printf("Sum = %d\n", sum);
    return 0;
}
