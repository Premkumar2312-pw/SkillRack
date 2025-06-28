struct Node* insertLinkedList(struct Node* h1, struct Node* h2, int k) {
    if (h1 == NULL) return h2;
    if (k == 0) {
        struct Node* t2 = h2;
        while (t2 && t2->next) t2 = t2->next;
        if (t2) t2->next = h1;
        return h2;
    }

    struct Node* t1 = h1;
    for (int i = 1; i < k && t1; i++) t1 = t1->next;
    if (t1 == NULL) return h1;

    struct Node* nxt = t1->next;
    t1->next = h2;

    struct Node* t2 = h2;
    while (t2 && t2->next) t2 = t2->next;
    if (t2) t2->next = nxt;

    return h1;
}