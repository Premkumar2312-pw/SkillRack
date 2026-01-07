void concatAndConvertToOctal(int SIZE, int arr[]){
    int m[10000];
    int s=0;
    for(int i=0;i<SIZE;i++){
        int j=0;
        long long a=arr[i];
        int f[1000];
        while(a>0){
            f[j] = a%2;
            a = a / 2;
            j++;
        }
        for(int k=j-1;k>=0;k--){ 
            m[s]=f[k];
            s++;
        }
    }
    int oct[10000], y = 0;
    for(int h=s-1;h>=0;h-=3){
        int v=0, po = 1;
        for(int j=h;j>=0 && j>h-3;j--){
            v+=m[j]*po;
            po*=2;
        }
        oct[y++]=v;
    }
    for(int i=y-1;i>=0;i--) {
        printf("%d",oct[i]);
    }
}