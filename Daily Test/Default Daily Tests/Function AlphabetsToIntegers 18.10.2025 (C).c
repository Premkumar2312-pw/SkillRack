boundedArray* alphabetsToIntegers(char *s){
    s[strlen(s)]=' ';
    boundedArray *r=(boundedArray *)malloc(sizeof(boundedArray));
    r->arr=(int*)malloc(strlen(s)*sizeof(int));
    r->SIZE=0;
    int j=0, si=1;
    char a[10]={ 'a','b','c','d','e','f','g','h','i','j' };
    for(int I=0; I<strlen(s); I++){
        if(isalpha(s[I])){
            for(int k=0; k<10; k++){
                if(a[k]==s[I]){
                    j=j*10+k;
                    break;
                }
            }
        } else{
            if(s[I]=='-'){si=-1;}
            else if(s[I]==' '){
                r->arr[r->SIZE++]=j*si; j=0; si=1;
            }
        }
    }
    return r;
}