//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Display the series: 1 2 2 3 3 3 4 4 4 4 ..... n
#include <stdio.h>

int main()
{
    //var
    int i, y, num;

    //inp
    printf("Enter the value of n: ");
    scanf("%d", &num);

    //calc and otp
    for(i=1; i<=num; i++)
    {
        for(y=1;y<=i;y++){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
