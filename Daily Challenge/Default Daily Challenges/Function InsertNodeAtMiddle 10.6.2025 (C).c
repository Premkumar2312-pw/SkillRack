struct Node* insertNodeAtMiddle(struct Node* h, int d) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = d;

    if (h == NULL) {
        n->next = n->prev = n;
        return n;
    }

    struct Node* s = h, *f = h;
    while (f->next != h && f->next->next != h) {
        s = s->next;
        f = f->next->next;
    }

    struct Node* nxt = s->next;
    s->next = n;
    n->prev = s;
    n->next = nxt;
    nxt->prev = n;

    return h;
}
