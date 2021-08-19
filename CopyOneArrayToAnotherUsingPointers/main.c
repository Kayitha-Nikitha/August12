#include <stdio.h>
#define max_size 50

/*Creating a function to display array elements*/
 void display_arr(int *arr, int size){
   int i;
   for(i = 0; i <= size; i++){
    printf("%d ", *(arr + i));
   }
 }

int main(){

 int arr1[max_size], arr2[max_size];
 int size, i;

 int *ptr1 = arr1; //Pointing to arr1
 int *ptr2 = arr2; //Pointing to arr2
 int *last_arr = arr1+9; //pointing last element of arr1

 printf("Enter array size: ");
 scanf("%d", &size);

 /*Running for loop to input array elements from user*/
 printf("Please enter first array elements: ");
 for(i = 0; i < size; i++){
    scanf("%d", ptr1 + i);
 }

 /*Displaying array elements of arr1 and arr2 before copying*/
 printf("\nFirst array elements before coping: ");
 display_arr(arr1, size-1);

 printf("\nSecond array elements before coping: ");
 display_arr(arr2, size-1);

 /*Copy elements of arr1 to arr2 by runing loop until arr1 exists in arr2*/
 while(ptr1 <= last_arr){
   *ptr2 = *ptr1;
    ptr1++;
    ptr2++;
 }

 /*Displaying array elements of arr1 and arr2 after copying*/
 printf("\n\nFirst array elements after coping: ");
 display_arr(arr1, size-1);

 printf("\nSecond array elements after coping: ");
 display_arr(arr2, size-1);

 return 0;
}
