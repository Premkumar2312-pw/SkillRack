struct Time* calculateTotalTime(char *s)
{
    struct Time* r=malloc(sizeof(struct Time*));
    unsigned long long a=0;long long int p=0;
    for(int i=0;i<strlen(s);i++){
        if (s[i]=='s'){
            a+=p;p=0;
        }
        else if(s[i]=='m'){
            a+=p*60;p=0;
        }
        else if(s[i]=='h'){
            a+=p*3600;p=0;
        }
        else if(s[i]=='d'){
            a+=p*3600*24;p=0;
        }
        else if(s[i]==' '){
            continue;
        }
        else{
            p=p*10+s[i]-'0';
        }
    }
    r->days=(a/(3600*24));a%=3600*24;
    r->hours=(a/3600);a%=3600;
    r->minutes=(a/60);
    r->seconds=a%60;
    return r;
    

}