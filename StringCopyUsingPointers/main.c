#include<stdio.h>

void copy_string(char*, char*);//function prototype

int main()
{
    int length;
    char source[100], target[100];
    printf("Enter source string:\n");
    gets(source);
    copy_string(target, source);
    printf("Target string is \"%s\"\n", target);
    printf("Length of new string: %d\n", strlen(target));//returns the length of the string without null character
    printf("Array capacity: %d", sizeof(target));//returns the capacity of the string
    return 0;
}

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}
