#include <stdio.h>
#include <string.h>

char GETCHAR(char str[], int n)
{
    return str[n];
}

void PUTCHAR(char str[], int n, char c)
{
    str[n] = c;
}

int LENGTH(char str[])
{
    return strlen(str);
}

int POS(char str1[], char str2[])
{
    char *p = strstr(str1, str2);

    if (p == NULL)
        return -1;

    return p - str1;
}

void CONCAT(char str1[], char str2[])
{
    strcat(str1, str2);
}

void SUBSTRING(char str[], int i, int m)
{
    int j;

    for (j = i; j < i + m; j++)
        printf("%c", str[j]);
}

void DELETE(char str[], int i, int m)
{
    int j;

    for (j = i; str[j + m] != '\0'; j++)
        str[j] = str[j + m];

    str[j] = '\0';
}

void INSERT(char str1[], char str2[], int i)
{
    char temp[100];

    strcpy(temp, str1 + i);
    str1[i] = '\0';

    strcat(str1, str2);
    strcat(str1, temp);
}

int COMPARE(char str1[], char str2[])
{
    return strcmp(str1, str2);
}

int main()
{
    char str1[100] = "HelloWorld";
    char str2[50] = "C";

    printf("GETCHAR = %c\n", GETCHAR(str1, 1));

    PUTCHAR(str1, 0, 'Y');
    printf("PUTCHAR = %s\n", str1);

    printf("LENGTH = %d\n", LENGTH(str1));

    printf("POS = %d\n", POS(str1, "World"));

    CONCAT(str1, str2);
    printf("CONCAT = %s\n", str1);

    printf("SUBSTRING = ");
    SUBSTRING(str1, 0, 5);
    printf("\n");

    DELETE(str1, 0, 1);
    printf("DELETE = %s\n", str1);

    INSERT(str1, "ABC", 2);
    printf("INSERT = %s\n", str1);

    printf("COMPARE = %d\n", COMPARE(str1, str2));

    return 0;
}
