#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} City;

int main() {
    int n;
    scanf("%d", &n);

    City *cities = malloc(n * sizeof(City));

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &cities[i].x, &cities[i].y);
    }

    for (int i = 0; i < n; i++) {
        int x1 = cities[i].x;
        int y1 = cities[i].y;
        int target = x1 + y1;

        for (int j = 0; j < n; j++) {
            if (cities[j].x == target) {
                int y2 = cities[j].y;
                if (target - y2 == x1) {
                    printf("YES\n");
                    free(cities);
                    return 0;
                }
            }
        }
    }

    printf("NO\n");
    free(cities);
    return 0;
}
