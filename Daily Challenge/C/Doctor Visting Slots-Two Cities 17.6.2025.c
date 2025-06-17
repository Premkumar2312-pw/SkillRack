#include <stdio.h>
#include <time.h>

void print_date_range(struct tm date) {
    char month[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%04d", date.tm_mday, month[date.tm_mon], date.tm_year + 1900);
}

int main() {
    int m, n, y;
    scanf("%d %d", &m, &n);
    scanf("%d", &y);

    struct tm dt = {0}, ed = {0};
    dt.tm_year = y - 1900; dt.tm_mon = 0; dt.tm_mday = 1;
    ed.tm_year = y - 1900; ed.tm_mon = 11; ed.tm_mday = 31;

    time_t end_time = mktime(&ed);
    char city = 'A';

    printf("City A:\n");
    while (mktime(&dt) <= end_time) {
        struct tm start = dt;
        int days = (city == 'A') ? m : n;

        dt.tm_mday += days - 1;
        mktime(&dt);
        if (mktime(&dt) > end_time) {
            dt = ed;
        }

        if (city == 'A') {
            print_date_range(start);
            printf(" to ");
            print_date_range(dt);
            printf("\n");
        }

        dt.tm_mday += 1;
        mktime(&dt);
        city = (city == 'A') ? 'B' : 'A';
    }

    dt.tm_year = y - 1900; dt.tm_mon = 0; dt.tm_mday = 1;
    city = 'A';

    while (mktime(&dt) <= end_time) {
        struct tm start = dt;
        int days = (city == 'A') ? m : n;

        dt.tm_mday += days - 1;
        mktime(&dt);
        if (mktime(&dt) > end_time) {
            dt = ed;
        }

        if (city == 'B') {
            print_date_range(start);
            printf(" to ");
            print_date_range(dt);
            printf("\n");
        }

        dt.tm_mday += 1;
        mktime(&dt);
        city = (city == 'A') ? 'B' : 'A';
    }

    return 0;
}
