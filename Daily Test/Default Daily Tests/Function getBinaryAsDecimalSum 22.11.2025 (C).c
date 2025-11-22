int getBinaryAsDecimalSum(int SIZE, int *arr)
{
    int d=0;
    char s1[10];int j=0;
    for(int i=0;i<SIZE;i++){
        int s=arr[i];
        while(s>0){
            s1[j++]=s%2+'0';
            s/=2;
        }
        int f=0;
        for(int k=j-1;k>=0;k--){
            f=f*10+(s1[k]-'0');
        }
        s1[0]='\0';j=0;d+=f;
    }
    return d;
    
}