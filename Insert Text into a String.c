#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], text[50], temp[100];
    int pos;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter position: ");
    scanf("%d", &pos);

    strcpy(temp, str + pos);
    str[pos] = '\0';

    strcat(str, text);
    strcat(str, temp);

    printf("After insertion = %s", str);

    return 0;
}
