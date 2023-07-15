//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Display the series: 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 ..... (n times)
#include <stdio.h>

int main()
{
    //var
    int i, j, n;

    //inp
    printf("Enter n: ");
    scanf("%d", &n);

    //calc and output
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d ", j);
        }
    }
    printf("\n");
    return 0;
}
