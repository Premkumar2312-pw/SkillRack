int concatBinary(int num1, int num2){
    char b1[40], b2[40], cat[80];
    int i=0, dec=0;

    if(num1==0) b1[i++]='0';
    while(num1){ b1[i++]='0'+(num1%2); num1/=2; }
    b1[i]=0;

    for(int j=0;j<i/2;j++){ char t=b1[j]; b1[j]=b1[i-1-j]; b1[i-1-j]=t; }

    sprintf(b2, "%d", num2);

    strcpy(cat, b1);
    strcat(cat, b2);

    for(int k=0; cat[k]; k++)
        dec = dec*2 + (cat[k]-'0');

    return dec;
}