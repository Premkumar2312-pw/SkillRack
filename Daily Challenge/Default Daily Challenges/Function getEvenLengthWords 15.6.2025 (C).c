boundedArray* getEvenLengthWords(char str[]) {
    boundedArray* b = (boundedArray*)malloc(sizeof(boundedArray));
    b->words = (char**)malloc(sizeof(char*) * 100);
    b->SIZE = 0;

    char* t = strtok(str, " ");
    while (t != NULL) {
        if (strlen(t) % 2 == 0) {
            b->words[b->SIZE] = (char*)malloc(strlen(t) + 1);
            strcpy(b->words[b->SIZE], t);
            b->SIZE++;
        }
        t = strtok(NULL, " ");
    }

    if (b->SIZE == 0) {
        b->words[0] = (char*)malloc(3);
        strcpy(b->words[0], "-1");
        b->SIZE = 1;
    }

    return b;
}