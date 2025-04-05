int **resultMatrix = (int**)malloc(R*sizeof(int*));
for(int i=0;i<R;i++){
    resultMatrix[i]=(int*)malloc(C * sizeof(int));
    for(int j=0;j<C;j++){
        resultMatrix[i][j] = *(matrix1 + i*C+j) + *(matrix2 + i*C+j);
    }
}
return resultMatrix;