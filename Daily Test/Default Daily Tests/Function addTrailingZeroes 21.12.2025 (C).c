void addTrailingZeroes(int SIZE, int arr[])
{
    int max=0;
    for(int i=0;i<SIZE;i++){
        if(max<arr[i]) max=arr[i];
    }
    char s[30];
    sprintf(s,"%d",max);
    int d=strlen(s);
    int c=0;
    for(int i=0;i<SIZE;i++){
        char a[30];
        sprintf(a,"%d",arr[i]);
        int f=d-strlen(a);
        int g=arr[i];
        for(int j=1;j<=f;j++){
            g=g*10;
        }
        c+=g;
    }
    printf("%d",c);

}