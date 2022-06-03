int TapeEquilibrium(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i, sum = 0, result = 10000, min = 0, sum_A = 0;

    for (i = 1; i < N; i++)
        sum += A[i];

    for (i = 0; i < N - 1; i++) {
        min = (sum_A + A[i]) - sum;
        sum_A += A[i];
        sum -= A[i + 1];

        if (min < 0)
            min *= -1;

        if (result > min)
            result = min;
    }

    return result;
}