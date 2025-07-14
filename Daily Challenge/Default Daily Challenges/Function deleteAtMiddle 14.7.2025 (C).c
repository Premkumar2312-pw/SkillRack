struct Node* deleteAtMiddle(struct Node *h) {
    if (!h || h->next == h) return NULL;
    int c = 1;
    struct Node *t = h;
    while (t->next != h) t = t->next, c++;
    int m = c / 2;
    t = h;
    while (m--) t = t->next;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    if (t == h) h = t->next;
    free(t);
    return h;
}