char* encryptMessage(char *msg, char *key)
{
    static char out[10000], full[27];
    int u[26]={0}, i, k=0;

    for(i=0; key[i]; i++){ u[key[i]-'a']=1, full[k++]=key[i];}
    for(i=0; i<26; i++) {if(!u[i]) full[k++]='a'+i;}
    full[26]='\0';

    for(i=0; msg[i]; i++){out[i]=full[msg[i]-'a'];}
    out[i]='\0';

    return out;
}