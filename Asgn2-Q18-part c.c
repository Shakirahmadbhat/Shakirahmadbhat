//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Using loops output the following:
//   *
//  ***
// *****
//*******

#include <stdio.h>



int main()
{
    //var
    int i, j, k, l;

    //calc and output
    for(i=1; i<=4; i++)
    {
        for(j=i; j<4; j++)
        printf(" ");

        for(k=1; k<=i; k++)
        printf("*");

        for(l=i-1; l>0; l--)
        printf("*");

        printf("\n");
    }
    return 0;
}
