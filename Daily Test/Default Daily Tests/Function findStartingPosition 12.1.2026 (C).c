int* findStartingPosition(int R, int C, char *matrix, char *str)
{
    static int pos[2];
    int len = 0;

    while (str[len] != '\0')
        len++;

    for (int col = 0; col < C; col++)
    {
        // TOP to BOTTOM
        for (int start = 0; start <= R - len; start++)
        {
            int k;
            for (k = 0; k < len; k++)
            {
                if (matrix[(start + k) * C + col] != str[k])
                    break;
            }
            if (k == len)
            {
                pos[0] = start + 1;
                pos[1] = col + 1;
                return pos;
            }
        }

        // BOTTOM to TOP
        for (int start = R - 1; start >= len - 1; start--)
        {
            int k;
            for (k = 0; k < len; k++)
            {
                if (matrix[(start - k) * C + col] != str[k])
                    break;
            }
            if (k == len)
            {
                pos[0] = start + 1;
                pos[1] = col + 1;
                return pos;
            }
        }
    }

    pos[0] = 0;
    pos[1] = 0;
    return pos;
}