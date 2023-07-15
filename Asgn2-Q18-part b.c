//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Using loops output the following:
//     *
//    **
//   ***
//  ****

#include <stdio.h>

int main()
{
    //var
    int i, j, k;

    //output
    for(i=1; i<=4; i++)
    {
        //printing spaces
        for(j=i; j<4; j++)
        printf(" ");

        //printing asterisks
        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
