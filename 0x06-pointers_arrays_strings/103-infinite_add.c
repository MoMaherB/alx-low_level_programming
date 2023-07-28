#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len_n1 = strlen(n1);
    int len_n2 = strlen(n2);
    int carry = 0;
    int sum;
    int i = len_n1 - 1;
    int j = len_n2 - 1;
    int idx = 0;

    // Check if the result can be stored in r
    if (len_n1 + len_n2 + 1 > size_r)
        return 0;

    // Add the numbers starting from the least significant digits
    while (i >= 0 || j >= 0 || carry > 0)
    {
        sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        r[idx] = (sum % 10) + '0';
        carry = sum / 10;

        idx++;
        i--;
        j--;
    }

    r[idx] = '\0';

    // Reverse the result to get the correct order
    int start = 0;
    int end = idx - 1;
    char temp;

    while (start < end)
    {
        temp = r[start];
        r[start] = r[end];
        r[end] = temp;
        start++;
        end--;
    }

    return r;
}

