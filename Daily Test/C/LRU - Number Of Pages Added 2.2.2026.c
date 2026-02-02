#include <stdio.h>

int main() {
    int N, S, R, X;
    scanf("%d", &N);

    int pages[N];
    for(int i = 0; i < N; i++)
        scanf("%d", &pages[i]);

    scanf("%d %d %d", &S, &R, &X);

    int cache[1000], size = 0, c = S, p = 0;

    for(int i = 0; i < N; i++) {
        int page = pages[i], found = -1;

        for(int j = 0; j < size; j++)
            if(cache[j] == page) found = j;

        if(found != -1) {
            for(int j = found; j < size - 1; j++)
                cache[j] = cache[j + 1];
            cache[size - 1] = page;
        } else {
            p++;
            if(size >= c) {
                for(int j = 0; j < size - 1; j++)
                    cache[j] = cache[j + 1];
                size--;
            }
            cache[size++] = page;
        }

        if(i + 1 == R)
            c += X;
    }

    printf("%d", p);
    return 0;
}