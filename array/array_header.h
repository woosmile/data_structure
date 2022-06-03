#pragma once

struct Results {
    int* A;
    int  N; // Length of the array
};

int OddOccurrencesInArray(int A[], int N);
struct Results CyclicRotation(int A[], int N, int K);