#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[50];
    char *p;

    printf("Enter string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    p = strstr(str, sub);

    if (p != NULL)
        printf("Starting position = %d", p - str);
    else
        printf("Substring not found");

    return 0;
}
