//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Adding the digits of a 4-digit number.

#include <stdio.h>

int main()
{
    //variables and initialization
    int inp_num, num, sum = 0, digit;

    //input
    printf("Enter a 4-digit number: ");
    scanf("%d", &inp_num);

    //calculations
    num = inp_num;
    while(num>0)
    {
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }

    //output
    printf("sum = %d\n", sum);

    return 0;
}
