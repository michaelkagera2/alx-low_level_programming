#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return: 0 (Success)
 */

int main(void)
{
    unsigned long long int idx;
    unsigned long long int prev = 1;
    unsigned long long int curr = 2;
    unsigned long long int limit = 1000000000;
    unsigned long long int prev1;
    unsigned long long int prev2;
    unsigned long long int curr1;
    unsigned long long int curr2;

    printf("%llu", prev);

    for (idx = 1; idx < 91; idx++)
    {
        printf(", %llu", curr);
        curr += prev;
        prev = curr - prev;
    }

    prev1 = (prev / limit);
    prev2 = (prev % limit);
    curr1 = (curr / limit);
    curr2 = (curr % limit);

    for (idx = 92; idx < 99; ++idx)
    {
        printf(", %llu", curr1 + (curr2 / limit));
        printf("%llu", curr2 % limit);
        curr1 = curr1 + prev1;
        prev1 = curr1 - prev1;
        curr2 = curr2 + prev2;
        prev2 = curr2 - prev2;
    }

    printf("\n");
    return 0;
}
