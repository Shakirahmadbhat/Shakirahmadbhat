//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Display the Fibonacci series: 1 1 2 3 5 8 13 21 ....... n
#include <stdio.h>

int main()
{
    //var
    int inp_num, current_num, prev_num, p_prev_num;

    //init
    prev_num = p_prev_num = 1;
    current_num = 0;

    //inp
    printf("Enter n: ");
    scanf("%d", &inp_num);

    // calc and otp
    while(current_num<=inp_num)
    {
         if(current_num==0)
         {
             printf("%d ", prev_num);                  //>1
             current_num = prev_num;                   // 1
         }
         else
         {
             printf("%d ", current_num);               //>1 >2 >3 >5
             current_num = prev_num + p_prev_num;      // 2  3  5  8
             p_prev_num = prev_num;                    // 1  2  3  5
             prev_num = current_num;                   // 2  3  5  8

         }

    }
    return 0;
}
