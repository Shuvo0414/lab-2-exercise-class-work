#include <stdio.h>

/*
Sum Main Diagonal of 3×3 MatrixInput a 3×3 integer matrix.
Calculate sum of elements on main diagonal (row index equals column index).
*/

int main()
{
    // Declare a 3x3 matrix
    int A[3][3];

    // Variable to store sum of main diagonal elements
    int sum = 0;

    // Input elements into the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]); // read each element
        }
    }

    // Directly access main diagonal elements (A[i][i])
    for (int i = 0; i < 3; i++)
    {
        sum += A[i][i]; // add diagonal element to sum
    }

    // Print the final result
    printf("Sum of main diagonal = %d\n", sum);

    return 0;
}