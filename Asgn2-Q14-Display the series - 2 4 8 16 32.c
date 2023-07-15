//Sat, Jul 15 || Musadiq Bashir || ECE-22-17
//Question: Display the series: 2 4 8 16 32 64 128 .......

#include <stdio.h>

int main()
{
    //var and init
    int i, inp_num, n=2;

    //inp
    printf("Enter a number: ");
    scanf("%d", &inp_num);

    //calc and otp
    for(i=0; i<inp_num; i++)
    {
        printf("%d ", n);
        n*=2;
    }
    printf("\n");
    return 0;
}
