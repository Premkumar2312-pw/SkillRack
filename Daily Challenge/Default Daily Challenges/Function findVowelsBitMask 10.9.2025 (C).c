int findVowelsBitMask(char s[])
{
    int r=0;
    for(int i=0; s[i]!='\0'; i++){
        char c=tolower(s[i]);
        if(c=='a')r=(r|1);
        else if(c=='e')r=(r|2);
        else if(c=='i')r=(r|4);
        else if(c=='o')r=(r|8);
        else if(c=='u')r=(r|16);
    }
    return r;
}
