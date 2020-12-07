#include <stdio.h>

int main()
{

    int i, j,rows,columns, arr1[50][50], arr2[50][50];
    printf("Enter the no. of rows you want to insert in an array: ");
    scanf("%d",&rows); 
    printf("Enter the no. of colums you want to insert in an array: ");
    scanf("%d",&columns); 
    printf("Enter the array elements for the specified position: \n ");


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter the element for position [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }


    printf("\n\n");

    //Printing the 1st array
    printf("The elements of the 1st array are: \n ");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            printf("%d \t", arr1[i][j]);
        }
    }


    printf("\n\n");

    //Copying the 1st array in 2nd array
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            arr2[i][j] = arr1[i][j];
        }
    }

    //Printing the 2nd array
    printf("The elements of the 2st array are: \n ");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            printf("%d \t", arr2[i][j]);
        }
    }

}