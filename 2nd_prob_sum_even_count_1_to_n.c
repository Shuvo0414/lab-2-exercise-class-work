#include <stdio.h>

/*

2.
Sum and Even Count from 1 to n：
Input a positive integer n.
Calculate the sum from 1 to n, count even numbers in this range.

*/

int main()
{
    // Variable to store the user's input value
    int n;
    scanf("%d", &n);

    // Variable to store the sum of numbers from 1 to n
    int sum = 0;

    // Variable to count how many even numbers exist in the range
    int evenCount = 0;

    // Loop through all numbers from 0 to n
    // (0 does not affect the sum, but it is counted as an even number)
    for (int i = 0; i <= n; i++)
    {
        // Add the current number to the running total
        sum = sum + i;

        // Check whether the current number is even
        if (i % 2 == 0)
        {
            // Increase the even number counter
            evenCount++;
        }
    }

    // Display the calculated sum
    printf("Sum Result : %d\n", sum);

    // Display the total count of even numbers
    printf("Total Even Number: %d", evenCount);

    return 0;
}