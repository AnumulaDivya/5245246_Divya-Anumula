int compareAsc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int compareDesc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    // Sort A in ascending order
    qsort(A, A_count, sizeof(int), compareAsc);

    // Sort B in descending order
    qsort(B, B_count, sizeof(int), compareDesc);

    // Check each pair
    for (int i = 0; i < A_count; i++) {
        if (A[i] + B[i] < k) {
            // Static allocation for return string
            static char no[] = "NO";
            return no;
        }
    }

    static char yes[] = "YES";
    return yes;
}