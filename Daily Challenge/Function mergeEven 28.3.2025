int* mergeEven(int M, int *arr1, int N, int *arr2) {
    static int merged[1000];  
    int *p1 = arr1, *p2 = arr2, *pMerged = merged;
    
    while (p1 < arr1 + M) {
        *pMerged++ = *p1;
        if (*p1 % 2 == 0 && p2 < arr2 + N) {
            *pMerged++ = *p2++;
        }
        p1++;
    }
    
    return merged;  
}
