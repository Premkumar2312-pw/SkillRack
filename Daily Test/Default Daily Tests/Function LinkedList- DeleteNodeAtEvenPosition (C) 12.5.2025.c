struct Node* deleteNodesAtEvenPositions(struct Node *lhead) {
    struct Node *temp = lhead;
    while (temp != NULL && temp->next != NULL) {
        temp->next = temp->next->next;
        temp = temp->next;
    }
    return lhead;
}