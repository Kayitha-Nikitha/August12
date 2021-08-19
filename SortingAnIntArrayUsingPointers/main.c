#include <stdio.h>

// Function to sort using pointers
void sorting(int n, int* ptr)
{
    int i, j, t;
    // Sorting numbers using pointers
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    // printing numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
// Driver code
int main()
{
    int n = 5;
    int arr[] = { 0, 23, 14, 12, 9 };
    sorting(n, arr);
    return 0;
}
