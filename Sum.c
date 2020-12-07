#include<stdio.h>

int main() {

    int i,j,rows,columns,sum;

    int arr[50][50];


    printf("Enter the no. of rows you want to insert in an array: ");
    scanf("%d",&rows); 
    printf("Enter the no. of colums you want to insert in an array: ");
    scanf("%d",&columns); 



    //Storing the elements
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++)
        {
            printf("Enter the value for element - [%d][%d]: ", i,j);
            scanf("%d",&arr[i][j]);
        }
    } 


    //Printing the variables
    printf(" \n The array is: \n");
    for (i = 0; i < rows; i++){
        printf("\n");
        for (j = 0; j < columns; j++)
        {
            printf("[%d]",arr[i][j]);
        }
    }


    //Sum of the array
    printf("\n");
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++)
        {
            sum += arr[i][j];
        }
    }
    
    printf("\n\n");
    

    printf("The sum of the 2D array: [%d]", sum);
}
