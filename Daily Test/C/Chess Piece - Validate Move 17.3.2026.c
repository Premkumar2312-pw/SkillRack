#include <stdio.h>

int main(){
    char a;
    char b[3], c[3];

    scanf(" %c %s %s",&a,b,c);

    int r=b[1]-'0';
    int col=b[0]-'a';

    int tr=c[1]-'0';
    int tc=c[0]-'a';

    int found=0;

    if(a=='R'){
        for(int i=0;i<8;i++){
            if((r==tr && i==tc) || (i==tr && col==tc))
                found=1;
        }
    }
    else if(a=='B'){
        for(int i=1;i<8;i++){
            if((r+i==tr && col+i==tc) ||
               (r+i==tr && col-i==tc) ||
               (r-i==tr && col+i==tc) ||
               (r-i==tr && col-i==tc))
                found=1;
        }
    }
    else{
        int dr[]={2,2,-2,-2,1,1,-1,-1};
        int dc[]={1,-1,1,-1,2,-2,2,-2};

        for(int i=0;i<8;i++){
            int nr=r+dr[i], nc=col+dc[i];
            if(nr==tr && nc==tc)
                found=1;
        }
    }

    printf(found?"Yes":"No");
}