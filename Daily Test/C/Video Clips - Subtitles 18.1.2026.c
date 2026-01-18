#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Subtitle {
    int start;
    int end;
    char content[101];
};

int to_seconds(char *time_str) {
    int m, s;
    sscanf(time_str, "%d:%d", &m, &s);
    return m * 60 + s;
}

void print_time(int seconds) {
    printf("%02d:%02d", seconds / 60, seconds % 60);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    struct Subtitle subs[55];
    char buffer[200];
    char time_part[10];

    for (int i = 0; i < n; i++) {
        scanf("%s", time_part);
        subs[i].start = to_seconds(time_part);
        
        fgets(buffer, sizeof(buffer), stdin);
        
        int len = strlen(buffer);
        while (len > 0 && (buffer[len-1] == '\n' || buffer[len-1] == '\r')) {
            buffer[--len] = '\0';
        }

        int last_space = -1;
        for (int j = len - 1; j >= 0; j--) {
            if (buffer[j] == ' ') {
                last_space = j;
                break;
            }
        }

        int duration = atoi(buffer + last_space + 1);
        subs[i].end = subs[i].start + duration;

        buffer[last_space] = '\0';
        
        char *content_start = buffer;
        while (*content_start == ' ') content_start++;
        
        strcpy(subs[i].content, content_start);
    }

    char x_str[10], y_str[10];
    scanf("%s %s", x_str, y_str);
    int x = to_seconds(x_str);
    int y = to_seconds(y_str);

    int found_any = 0;
    for (int t = x; t <= y; t++) {
        for (int i = 0; i < n; i++) {
            if (subs[i].start <= t && t < subs[i].end) {
                found_any = 1;
                break;
            }
        }
        if (found_any) break;
    }

    if (!found_any) {
        printf("-1\n");
    } else {
        for (int t = x; t <= y; t++) {
            print_time(t);
            int first = 1;
            int printed_content = 0;
            
            for (int i = 0; i < n; i++) {
                if (subs[i].start <= t && t < subs[i].end) {
                    if (first) {
                        printf(" ");
                        first = 0;
                    } else {
                        printf(" | ");
                    }
                    printf("%s", subs[i].content);
                    printed_content = 1;
                }
            }
            printf("\n");
        }
    }

    return 0;
}