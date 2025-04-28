#include <math.h>
#include <stdlib.h>

int** getMatrixFromArrays(int M, int arr1[], int N, int arr2[]) {
    int t = M + N;
    int s = (int)sqrt(t);

    int** matrix = (int**)malloc(s * sizeof(int*));
    for (int i = 0; i < s; i++) {
        matrix[i] = (int*)malloc(s * sizeof(int));
    }

    int idx = 0;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (idx < M) 
                matrix[i][j] = arr1[idx];
            else 
                matrix[i][j] = arr2[idx - M];
            idx++;
        }
    }
    
    return matrix;
}