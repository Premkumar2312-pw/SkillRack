struct Node* getBinaryRepresentation(int N) {
    if (N == 0) {
        struct Node* p = (struct Node*)malloc(sizeof(struct Node));
        p->val = 0;
        p->prev = p->next = NULL;
        return p;
    }

    struct Node *h = NULL, *t = NULL;

    while (N > 0) {
        int b = N % 2;
        struct Node* p = (struct Node*)malloc(sizeof(struct Node));
        p->val = b;
        p->prev = p->next = NULL;

        if (!h) {
            h = t = p;
        } else {
            p->next = h;
            h->prev = p;
            h = p;
        }

        N /= 2;
    }

    return h;
}