//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Write a program to display cubes of natural number upto n.
#include <stdio.h>

int main()
{
    //var
    int i, n, cube;

    //inp
    printf("Enter n: ");
    scanf("%d", &n);

    //calc && otp
    for(i=1; i<=n; i++)
    {
        cube = i*i*i;
        printf("Cube of %d is %d\n", i, cube);
    }
    return 0;
}
