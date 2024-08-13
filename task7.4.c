#include <stdio.h>

int main()
 {
    int rows, cols;
    

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowIndex, colIndex;
    printf("Enter the row index to find the sum: ");
    scanf("%d", &rowIndex);
    printf("Enter the column index to find the sum: ");
    scanf("%d", &colIndex);

    if (rowIndex < 0 || rowIndex >= rows || colIndex < 0 || colIndex >= cols) 
	{
        printf("Invalid row or column index.\n");
        return 1;
    }

    int rowSum = 0;
    for (int j = 0; j < cols; j++) 
	{
        rowSum += matrix[rowIndex][j];
    }


    int colSum = 0;
    for (int i = 0; i < rows; i++) 
	{
        colSum += matrix[i][colIndex];
    }
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of elements in row %d: %d\n", rowIndex, rowSum);
    printf("Sum of elements in column %d: %d\n", colIndex, colSum);

    return 0;
}
