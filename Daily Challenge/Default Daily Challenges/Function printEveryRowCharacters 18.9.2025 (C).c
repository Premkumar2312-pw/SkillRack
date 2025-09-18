for(int i=0;i<R;i++){
    for(int j=i;j<C;j+=(i+1)){
        printf("%c ",matrix[i*C+j]);
    }
}