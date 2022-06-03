int OddOccurrencesInArray(int A[], int N)
{
    int i = 0;
    int j = 1;

    while (i < N)
    {
        if (A[i] == A[j])
        {
            A[i] = 0;
            A[j] = 0;
        }
        j++;
        if (j >= N)
        {
            i++;
            j = i + 1;
        }
    }

    i = 0;
    while (i < N)
    {
        if (A[i] != 0)
            return A[i];
        i++;
    }

    return 0;
}