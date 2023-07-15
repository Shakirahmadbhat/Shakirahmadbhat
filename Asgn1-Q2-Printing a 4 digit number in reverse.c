//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Display the series: 2 4 16 256 65536 ...
#include <stdio.h>

int main()
{
    //var and init
    int i, n;
    double num = 2;

    //inp
    printf("Enter n: ");
    scanf("%d", &n);

    //calc and otp
    for(i=1; i<n; i++)
    {
        printf("%.0f ", num);
        num*=num;
    }
    printf("\n");
    return 0;
}
