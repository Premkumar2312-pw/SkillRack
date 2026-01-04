void printTimeInSeconds(int count, ...){
    va_list args;
    va_start(args, count);
    int h = 0;

    for(int i = 0; i < count; i++){
        Time t = va_arg(args, Time);
        h += t.hours * 3600 + t.minutes * 60 + t.seconds;
    }

    va_end(args);
    printf("%d\n", h);
}