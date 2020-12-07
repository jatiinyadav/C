#include <stdio.h>


int main() {
    // Write C code here
    printf("Enter the no. you want fact : ");
    printf("The factorial is %d", fact());
    return 0;
}


int fact(int n)
{
    int i;
    int fact = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
