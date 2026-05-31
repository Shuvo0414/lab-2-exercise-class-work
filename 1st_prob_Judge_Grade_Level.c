#include <stdio.h>

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