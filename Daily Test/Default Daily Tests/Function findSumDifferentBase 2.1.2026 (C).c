int findSumDifferentBase(char *str){
    int ab(char c){
        if(c=='D' || c=='d') return 10;
        else if(c=='B' || c=='b') return 2;
        else if(c=='O' || c=='o') return 8;
        else if(c=='H' || c=='h')
            return 16;
    }

    char c[30]; 
    int g=0; 
    int k=ab(str[0]); 
    char f[30]; 
    int n=0;

    for(int i=1;i<strlen(str);i++){
        if(str[i]==' ' || i==strlen(str)-1){
            if(i==strlen(str)-1){
                f[g++]=str[strlen(str)-1];
            }
            f[g]='\0';
            n+=strtol(f,NULL,k);
            k=ab(str[i+1]);
            f[0]='\0';
            g=0;
        }
        else{
            if(str[i-1]!=' '){
                f[g++]=str[i];
            }
        }
    }
    return n;
}