#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int count = 0;
    int c = 0;
    scanf("%d", &a);
    int temp = a;

    while (temp)
    {
        temp = temp / 10;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        b = a % 10;
        a = a / 10;
        if (b % 2 == 0)
        {
            c = c + 0 * pow(10, i);
        }
        else
        {
            c = c + 1 * pow(10, i);
        }
    }

    printf("%d", c);

    return 0;
}