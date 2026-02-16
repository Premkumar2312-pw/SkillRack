#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Point;

int exists(Point pts[], int size, int x, int y) {
    for(int i = 0; i < size; i++)
        if(pts[i].x == x && pts[i].y == y)
            return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    Point pts[1000];
    int size = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &pts[size].x, &pts[size].y);
        size++;
    }

    int count = 0;

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {

            int dx = pts[j].x - pts[i].x;
            int dy = pts[j].y - pts[i].y;

            if(abs(dx) == abs(dy) && dx != 0) {

                if(exists(pts, size, pts[i].x, pts[j].y) &&
                   exists(pts, size, pts[j].x, pts[i].y)) {
                    count++;
                }
            }
        }
    }

    printf("%d", count / 2);
}