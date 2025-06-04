boundedArray * customSplit(char *str,char d){
    int l = strlen(str);
    int c = 0;
    int s = 0;
    int i;
    for(i = 0;i<l;i++){
        if(str[i] == d){
            if(i>s) c++;
            s = i + 1;
        }
    }
    if(l>s) c++;
    boundedArray*r = (boundedArray*)malloc(sizeof(boundedArray));
    r -> words = (char**)malloc(c * sizeof(char*));
    r -> SIZE = c;
    c = 0;
    s = 0;
    for(i = 0;i<=l;i++){
        if(str[i] == d || str[i] == '\0'){
            if(i>s){
                int w = i-s;
                r -> words[c] = (char*)malloc(w + 1);
                strncpy(r->words[c],str+s,w);
                r->words[c][w] = '\0';
                c++;
            }
            s = i+1;
        }
    }
    return r;
}