void findMissingInteger(int R, int C, int m[R][C])
{
    int max = 0;
    int x = 0;
    int y = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
            if (m[i][j] == -1) {
                x = i;
                y = j;
            }
        }
    }

    int c = max - (R * C);
    int arr[R * C], a[R * C];
    int t = 0;

    for (int i = c + 1; i <= max; i++) {
        arr[t] = i;
        t += 1;
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int h = m[i][j];
            for (int k = 0; k < R * C; k++) {
                if (h == arr[k]) {
                    a[k] = 1;
                }
            }
        }
    }

    int u = 0;
    for (int i = 0; i < t; i++) {
        if (a[i] == 0) {
            u = i;
        }
    }

    m[x][y] = arr[u];
}