struct Node* leftShift(struct Node *lhead, int X)
{
    if (lhead == NULL || lhead->next == NULL || X == 0)
        return lhead;

    struct Node* temp = lhead;
    int len = 1;

    while (temp->next != NULL) {
        temp = temp->next;
        len++;
    }

    X = X % len;
    if (X == 0) return lhead;

    temp->next = lhead;

    temp = lhead;
    for (int i = 1; i < X; i++) {
        temp = temp->next;
    }

    struct Node* newHead = temp->next;
    temp->next = NULL;

    return newHead;
}