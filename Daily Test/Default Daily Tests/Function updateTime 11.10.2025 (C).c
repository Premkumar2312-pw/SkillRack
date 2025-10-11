void updateTime(struct Time *time, char *str)
{
    int v = 0, d = time->hours * 3600 + time->minutes * 60 + time->seconds;
    char c;
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            v = v * 10 + str[i] - '0';
        } else {
            c = tolower(str[i]);
        }
    }
    if (c == 's') {
        d += v;
    } else if (c == 'm') {
        d += v * 60;
    } else {
        d += v * 3600;
    }
    time->hours = (d / 3600) % 24;
    time->minutes = (d % 3600) / 60;
    time->seconds = d % 60;
}