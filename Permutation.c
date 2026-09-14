#include <stdio.h>

void permute(char str[], int l, int r)
{
    int i;
    char temp;

    if (l == r)
    {
        printf("%s\n", str);
        return;
    }

    for (i = l; i <= r; i++)
    {
        temp = str[l];
        str[l] = str[i];
        str[i] = temp;

        permute(str, l + 1, r);

        temp = str[l];
        str[l] = str[i];
        str[i] = temp;
    }
}

int main()
{
    char str[20];

    printf("Enter elements: ");
    scanf("%s", str);

    permute(str, 0, 2);

    return 0;
}
