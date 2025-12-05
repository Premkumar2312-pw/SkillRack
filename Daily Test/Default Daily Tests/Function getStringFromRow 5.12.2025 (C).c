X--;  
Y--;
char *str = malloc(R * C + 1);
int k = 0;
int row = X;
while (1) {
    for (int j = 0; j < C; j++) {
        str[k++] = matrix[row * C + j];
    }
    if (row == Y){
        break;
    }
    row = (row + 1) % R;
    }
    str[k] = '\0';
    return str;