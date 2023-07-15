//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: A program that takes a number from 1-12 as input and prints the corresponding month name.

#include <stdio.h>

int main()
{
    //variables and initialization
    int n;
    char month_name[12][4]= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    //input
    printf("Enter your number (1-12): ");
    scanf("%d", &n);

    //output
    if(n>=0&&n<=12)
    printf("%s\n", month_name[n-1]);
    else
    printf("Invalid input!\n");

    return 0;
}
