#include <stdio.h>

int main() {
    int l,h,r,c;
    scanf("%d %d",&l,&h);
    scanf("%d %d",&r,&c);

    int k=l/2;

    for(int i=0;i<r;i++){
        int t=(r-i-1)%4;

        for(int x=0;x<h;x++){
            char row[1000]="";
            int idx=0;

            if(t==0){
                for(int j=0;j<c;j++)
                    row[idx++]=(j%2==0)?'*':'#';
            }
            else if(t==1){
                for(int j=0;j<k;j++) row[idx++]='#';
                for(int j=0;j<c;j++)
                    row[idx++]=(j%2==0)?'*':'#';
            }
            else if(t==2){
                for(int j=0;j<c;j++)
                    row[idx++]=(j%2==0)?'#':'*';
            }
            else{
                for(int j=0;j<k;j++) row[idx++]='*';
                for(int j=0;j<c;j++)
                    row[idx++]=(j%2==0)?'#':'*';
            }

            row[c]='\0';
            printf("%s\n",row);
        }
    }
}