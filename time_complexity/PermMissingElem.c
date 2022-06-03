int PermMissingElem(int A[], int N) {
    int result = N + 1;

    for (int i = 0; i < N; i++) {
        result += i + 1;
        result -= A[i];
    }
    return result;
}