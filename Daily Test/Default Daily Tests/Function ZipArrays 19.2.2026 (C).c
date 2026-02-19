void zipArrays(int count, ...)
{
    va_list ap;
    va_start(ap, count);

    int n1 = va_arg(ap, int);
    int *a1 = va_arg(ap, int *);
    int n2 = va_arg(ap, int);
    int *a2 = va_arg(ap, int *);

    if (count == 4) {
        int m = n1 < n2 ? n1 : n2;
        for (int i = 0; i < m; ++i)
            printf("%d %d\n", a1[i], a2[i]);
    }
    else if (count == 6) {
        int n3 = va_arg(ap, int);
        int *a3 = va_arg(ap, int *);

        int m = n1;
        if (n2 < m) m = n2;
        if (n3 < m) m = n3;

        for (int i = 0; i < m; i++)
            printf("%d %d %d\n", a1[i], a2[i], a3[i]);
    }

    va_end(ap);
}
