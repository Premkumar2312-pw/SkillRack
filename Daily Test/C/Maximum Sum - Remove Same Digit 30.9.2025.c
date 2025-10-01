#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    char arr[N][50];
    for(int i=0;i<N;i++) scanf("%s", arr[i]);

    int originalSum=0;
    for(int i=0;i<N;i++) originalSum+=atoi(arr[i]);

    int ans=INT_MIN;
    for(int d=0; d<10; d++){
        int s=0;
        for(int i=0;i<N;i++){
            char tmp[50];
            strcpy(tmp, arr[i]);
            int len=strlen(tmp), k=0;
            for(int j=0;j<len;j++){
                if(tmp[j] != ('0'+d)) tmp[k++]=tmp[j];
            }
            tmp[k]='\0';
            if(strlen(tmp)==0) strcpy(tmp,"0");
            s+=atoi(tmp);
        }
        if(s!=originalSum && s>ans) ans=s;
    }
    printf("%d\n", ans);
    return 0;
}
