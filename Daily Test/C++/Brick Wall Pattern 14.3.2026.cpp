#include <iostream>
using namespace std;

int main(){
    int l,h,r,c;
    cin>>l>>h;
    cin>>r>>c;

    int k=l/2;

    for(int i=0;i<r;i++){
        int t=(r-i-1)%4;

        for(int x=0;x<h;x++){
            string row="";

            if(t==0){
                for(int j=0;j<c;j++)
                    row+=(j%2==0?'*':'#');
            }
            else if(t==1){
                row+=string(k,'#');
                for(int j=0;j<c;j++)
                    row+=(j%2==0?'*':'#');
            }
            else if(t==2){
                for(int j=0;j<c;j++)
                    row+=(j%2==0?'#':'*');
            }
            else{
                row+=string(k,'*');
                for(int j=0;j<c;j++)
                    row+=(j%2==0?'#':'*');
            }

            cout<<row.substr(0,c)<<endl;
        }
    }
}