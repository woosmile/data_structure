#include <stdio.h>

int iterations(int N)
{
    int num = 0, count = 0, flag = 0, result = 0;

    do {
        num = N % 2;
        N /= 2;

        if (num == 1)
            flag++;

        if (flag == 1 && num == 0)
            count++;
        else if (flag == 2)
        {
            if (result < count)
            {
                result = count;
                count = 0;
                flag = 1;
            }
            else
            {
                count = 0;
                flag = 1;
            }
        }
    } while (N > 0);

    return result;
}

int main(void)
{
    printf("%d\n", iterations(6666644));
}