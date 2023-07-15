//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Search for a number in an array. Also find minimum and maximux of the numbers in the array.


#include <stdio.h>

int main()
{
    //variables and initialization
    int num[10] = {64, 71, 3, 25, 45, 93, 22, 9, 88, 3};
    int min = num[0];
    int max = num[0];
    int i, inp_num, flag = 0;

    //input
    printf("Enter the number you want to search: ");
    scanf("%d", &inp_num);

    //calc and output
    for(i=0; i<10; i++)
    {
        if(min>num[i])          //min
        min = num[i];
        if(max<num[i])          //max
        max = num[i];
        if(num[i]==inp_num)     //search
        {
            printf("The location of %d is %d.\n", inp_num, i+1);        //will print multiple locations if a number repeats in an array like 3 in our case.
            flag = 1;
        }
    }
    if(flag==0)
    printf("Your number is not present in the array.\n");
    printf("Min = %d\nMax = %d\n", min, max);

}
