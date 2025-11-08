int isCaseBalancedString(char *s)
{
    int lf=1, ls=1, uf=1, us=1;
    for(int i=0; s[i]; i++){
        if(s[i]>='a' && s[i]<='z'){
            if(s[i]=='m') ls=0;
            else lf=0;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            if(s[i]=='M') us=0;
            else uf=0;
        }
    }
    return (lf && us) || (ls && uf);
}