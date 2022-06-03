int Fish(int A[], int B[], int N)
{
    int* stack = (int*)malloc(sizeof(int) * N);
    int top = -1, count = 0;

    for (int i = 0; i < N; i++)
    {
        if (B[i] == 1)
            stack[++top] = A[i];
        else
        {
            while (top >= 0)
            {
                if (stack[top] > A[i])
                    break;
                top--;
            }
            if (top < 0)
                count++;
        }
    }
    return count + ++top;
}