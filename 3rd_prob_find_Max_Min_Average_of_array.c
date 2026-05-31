#include <stdio.h>

/*
3.
Find Max, Min and Average of Array.
# Input 6 integers into an array.
# Output maximum value, minimum value and average value.
*/

int main()
{
    // Declare and initialize an array of 6 integers
    int ar[6] = {1, 2, 3, 4, 5, 6};

    // Initialize max and min with the first element of the array
    // This ensures correct comparison even for negative numbers
    int maxValue = ar[0], minimumValue = ar[0];

    // Variable to store the sum of all elements in the array
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        // Check if current element is greater than current maximum
        if (maxValue < ar[i])
        {
            maxValue = ar[i];
        }

        // Check if current element is smaller than current minimum
        if (minimumValue > ar[i])
        {
            minimumValue = ar[i];
        }

        // Add current element to total sum
        sum = sum + ar[i];
    }

    // Calculate average value (use 6.0 to ensure floating-point division)
    float average = sum / 6.0;

    // Print maximum value in the array
    printf("Maximum Value in array : %d\n", maxValue);

    // Print minimum value in the array
    printf("Minimum Value in array : %d\n", minimumValue);

    // Print average value of the array
    printf("Average value in array : %0.2f\n", average);

    return 0;
}