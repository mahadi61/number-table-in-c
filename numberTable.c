#include <stdio.h>

int main()
{

    // number table
    int mul, i = 1, ans;

    printf("Enter your number: ");
    scanf("%d", &mul);

    while (i <= 10)
    {
        ans = mul * i;
        printf("%d * %d = %d\n", mul, i, ans);
        i++;
    }

    return 0;
}