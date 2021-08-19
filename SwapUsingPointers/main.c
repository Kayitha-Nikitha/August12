 /* Program to swap two numbers using pointers*/
#include <stdio.h>

// function to swap the two numbers
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int n1,n2;

    printf("First number: ");
    scanf("%d",&n1);
    printf("Second number: ");
    scanf("%d",&n2);

    //displaying numbers before swapping
    printf("Before Swapping n1: %d, n2: %d\n",n1,n2);

    //calling the user defined function swap()
    swap(&n1,&n2);

    //displaying numbers after swapping
    printf("After  Swapping n1: %d, n2: %d\n",n1,n2);

    return 0;
}
