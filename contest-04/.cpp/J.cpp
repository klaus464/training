#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int len = (2 * n) - 1, arr[len][len], value, i, j;
    for (i = 0; i < n - 1; i++)
    {
        value = n;
        for (j = 0; j < len; j++)
        {
            if (j < i)
                printf("%d ", value--);
            else if (j < len - i)
                printf("%d ", value);
            else
                printf("%d ", ++value);
        }
        printf("\n");
    }

    value = n;
    for (i = 0; i < len; i++)
    {
        if (i < n)
            printf("%d ", n - i);
        else
            printf("%d ", i - n + 2);
    }
    printf("\n");

    for (i = n - 1; i > 0; i--)
    {
        value = n;
        for (j = 0; j < len; j++)
        {
            if (j < i - 1)
                printf("%d ", value--);
            else if (j < len - i + 1)
                printf("%d ", value);
            else
                printf("%d ", ++value);
        }
        printf("\n");
    }
    return 0;
}
