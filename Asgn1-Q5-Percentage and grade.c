//Sat, Jul 15 || Shakir Ahmad Bhat || ECE-22-14
//Question: Write a prog to calculate percentage and grade of a student by accepting marks
//in 5 subjects as input. Asssume the maximum marks to be 500.

#include <stdio.h>

int main()
{
    //variables and initialization
    int marks[4], total_marks, i;
    float percentage;

    //input
    for(i=0; i<5; i++)
    {
        printf("Enter marks in subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total_marks = total_marks + marks[i];           //Adding the marks
    }

    //calculation
    percentage = (total_marks/500.0)*100;

    //output
    if(percentage>100)
    printf("Enter correct marks!\n");
    else if(percentage<=100&&percentage>=90)
    printf("Grade A\nPercentage: %.1f\n", percentage);
    else if(percentage>=80)
    printf("Grade B\nPercentage: %.1f\n", percentage);
    else if(percentage>=70)
    printf("Grade C\nPercentage: %.1f\n", percentage);
    else if(percentage>=60)
    printf("Grade D\nPercentage: %.1f\n", percentage);
    else if(percentage>=50)
    printf("Grade E\nPercentage: %.1f\n", percentage);
    else
    printf("Failed!\nPercentage: %.1f\n", percentage);

    return 0;
}
