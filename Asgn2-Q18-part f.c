//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Using loops output the following:
//   1
//  212
// 32123
//4321234

#include <stdio.h>

int main()
{
    //var
    int i, j, k, l;

    //otp
    for(i=1; i<=4; i++)
    {
        for(j=i; j<4; j++)
        printf(" ");

        for(k=i; k>=1; k--)
        printf("%d", k);

        for(l=2; l<=i; l++)
        printf("%d", l);

        printf("\n");
    }
    return 0;
}
