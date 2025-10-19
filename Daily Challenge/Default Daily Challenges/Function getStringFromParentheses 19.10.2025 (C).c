char* getStringFromParentheses(char *s)
{
    static char c[1000];
    int j = 0, k = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == '(') {
            k = i + 1;
            while(s[k] != ')') {
                c[j++] = s[k];
                k = (k + 1) % strlen(s);
            }
        }
    }
    if(c[0] == '') return "-1";
    else return c;
}