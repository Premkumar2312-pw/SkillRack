void readMatrixFromFile(char fileName[])
{
    FILE *fp;
    fp = fopen(fileName,"r");
    if(fileName[0]=='i'|| fileName[1]=='g'){
    int r,c;
    fscanf(fp,"%d %d",&r,&c);
    
    int matrix[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            fscanf(fp,"%d",&matrix[i][j]);
        }
    }
    for(int j=0;j<c;j++){
        int sum = 0;
        for(int i=0;i<r;i++){
            sum+=matrix[i][j];
        }
        printf("%d ",sum);
    }
    }
    else{
        int r,c;
        fscanf(fp,"%d %d",&r,&c);
        char matrix[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                fscanf(fp," %c",&matrix[i][j]);
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(j%2==0){
                    printf("%c ",matrix[i][j]);
                }
            }printf("\n");
        }
    }
    
}