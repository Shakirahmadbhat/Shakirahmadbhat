//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Write a program in C to display the multiplication table for a number n taken as input.
#include <stdio.h>

int main()
{
    //var
    int n, i, table;

    //inp
    printf("Enter n: ");
    scanf("%d", &n);

    //calc && otp
    for(i=1; i<=10; i++)
    {
        table = n * i;
        printf("%d x %d = %d\n", n, i, table);
    }
    return 0;
}
