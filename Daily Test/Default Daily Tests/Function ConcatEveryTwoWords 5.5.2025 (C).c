boundedArray* concatEveryTwoWords(char str[])
{
    boundedArray* res = (boundedArray*)malloc(sizeof(boundedArray));
    res->words = (char**)malloc(500 * sizeof(char*));
    res->SIZE = 0;
    char * tok = strtok(str, " ");
    while (tok != NULL) {
        char * fs = tok;
        tok = strtok(NULL, " ");
        if (tok == NULL) break;
        char * sc = tok;
        char* con = (char*)malloc(strlen(fs) + strlen(sc) + 1);
        strcpy(con, fs);
        strcat(con, sc);
        res->words[res->SIZE++] = con;
        tok = strtok(NULL, " ");
    }
    return res;
}