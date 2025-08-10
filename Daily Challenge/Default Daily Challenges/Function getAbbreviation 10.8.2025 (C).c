#include <ctype.h>
#include <string.h>

char* getAbbreviation(char*s){
    static char r[100];int j=0,nw=1;
    for(int i=0;s[i];i++){
        if(s[i]!=' '&&nw){r[j++]=toupper(s[i]);nw=0;}
        if(s[i]==' ')nw=1;
    }
    r[j]=0;
    return r;
}