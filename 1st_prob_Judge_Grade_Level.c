#include <stdio.h>

/*
1.
Judge Grade Level：Input a score between 0 and 100. Classify the grade:
90 - 100 : Excellent 
80 - 89 : Good 
60 - 79 : Pass
0 - 59 : Fail

Prompt error if input is invalid.

*/



int main()
{
    int grade;
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Invalid input");
    }
    else if (grade >= 90)
    {
        printf("Excellent");
    }

    else if (grade >= 80)
    {
        printf("Good");
    }
    else if (grade >= 60)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}