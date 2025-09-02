void sortRowsAndColumns(int R, int C, int *matrix)
{
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C - 1; j++) {
            for(int k = j + 1; k < C; k++) {
                if(*(matrix + i * C + j) > *(matrix + i * C + k)) {
                    int temp = *(matrix + i * C + j);
                    *(matrix + i * C + j) = *(matrix + i * C + k);
                    *(matrix + i * C + k) = temp;
                }
            }
        }
    }

    for(int j = 0; j < C; j++) {
        for(int i = 0; i < R - 1; i++) {
            for(int k = i + 1; k < R; k++) {
                if(*(matrix + i * C + j) > *(matrix + k * C + j)) {
                    int temp = *(matrix + i * C + j);
                    *(matrix + i * C + j) = *(matrix + k * C + j);
                    *(matrix + k * C + j) = temp;
                }
            }
        }
    }
}