//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Using loops output the following:
//   1
//  2 2
// 3 3 3
//4 4 4 4


#include <stdio.h>

int main()
{
    //var
    int i, j, k;

    //otp
    for(i=1; i<=4; i++)
    {
        for(j=i; j<4; j++)
        printf(" ");

        for(k=1; k<=i; k++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }
    return 0;
}
