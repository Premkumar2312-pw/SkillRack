void swapChildren(struct Node *root, int X) {
    if (root == NULL)
        return;
    
    if (root->data == X) {
        if (root->left != NULL && root->right != NULL) {
            struct Node *temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        return;
    }

    swapChildren(root->left, X);
    swapChildren(root->right, X);
}