#include <stdio.h>
#include <time.h>

void add_days(struct tm *dt, int days) {
    dt->tm_mday += days;
    mktime(dt);
}

void print_date(struct tm dt) {
    char* months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%d", dt.tm_mday, months[dt.tm_mon], dt.tm_year + 1900);
}

int main() {
    int M, N, Y;
    scanf("%d %d", &M, &N);
    scanf("%d", &Y);

    struct tm curr = {0}, end = {0};
    curr.tm_year = end.tm_year = Y - 1900;
    curr.tm_mon = end.tm_mon = 0;
    curr.tm_mday = 1;
    end.tm_mon = 11;
    end.tm_mday = 31;
    mktime(&curr);
    mktime(&end);

    int flag = 1;

    printf("City A:\n");
    while (difftime(mktime(&curr), mktime(&end)) <= 0) {
        struct tm next = curr;
        add_days(&next, (flag ? M : N) - 1);
        if (difftime(mktime(&next), mktime(&end)) > 0)
            next = end;

        if (flag)
            print_date(curr), printf(" to "), print_date(next), printf("\n");

        curr = next;
        add_days(&curr, 1);
        flag = !flag;
    }

    curr.tm_year = Y - 1900;
    curr.tm_mon = 0;
    curr.tm_mday = 1;
    mktime(&curr);
    flag = 1;

    printf("City B:\n");
    while (difftime(mktime(&curr), mktime(&end)) <= 0) {
        struct tm next = curr;
        add_days(&next, (flag ? M : N) - 1);
        if (difftime(mktime(&next), mktime(&end)) > 0)
            next = end;

        if (!flag)
            print_date(curr), printf(" to "), print_date(next), printf("\n");

        curr = next;
        add_days(&curr, 1);
        flag = !flag;
    }
    return 0;
}