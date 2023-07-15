//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Display n natural numbers and their sum.
#include <stdio.h>

int main()
{
    //var
    int i, sum, n;

    //init
    sum = 0;

    //inp
    printf("Enter n: ");
    scanf("%d", &n);

    //calc & otp
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nsum = %d\n", sum);
    return 0;
}
