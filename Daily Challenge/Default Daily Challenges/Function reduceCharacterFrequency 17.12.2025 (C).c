char* reduceCharacterFrequency(char *str, int K)
{
    int count[256]={0};
    int n=strlen(str);
    char *res=(char*)malloc(n+1);
    int index=0;
    for(int i=0;i<n;i++){
        unsigned char ch=str[i];
        if(count[ch]<K){
            res[index++]=ch;
            count[ch]++;
        }
    }
    res[index]='\0';
    return res;
}