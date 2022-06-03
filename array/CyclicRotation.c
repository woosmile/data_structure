#include <stdlib.h>
#include "array_header.h"

struct Results CyclicRotation(int A[], int N, int K)
{
    struct Results result;
    int* arr = (int*)malloc(N * sizeof(int));
    int i;

    for (i = 0; i < N; i++)
        arr[(i + K) % N] = A[i];

    result.A = arr;
    result.N = N;

    return result;
}