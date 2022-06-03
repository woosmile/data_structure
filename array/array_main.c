#include <stdio.h>
#include "array_header.h"

int main(void)
{
    int num_cyclic[5] = { 3, 8, 9, 7, 6 };
    int num_odd[7] = { 9, 3, 9, 3, 9, 7, 9 };
    int i = 0;
    
    struct Results a;
    a = CyclicRotation(num_cyclic, 5, 3);

    printf("CyclicRotation\n");
    for (i = 0; i < 5; i++)
        printf("%d", a.A[i]);
    
    printf("\n\nOddOccurrencesInArray\n");
    
    printf("%d\n", OddOccurrencesInArray(num_odd, 7));
}