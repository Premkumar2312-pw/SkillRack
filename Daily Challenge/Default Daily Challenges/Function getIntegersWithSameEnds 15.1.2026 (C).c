boundedArray* getIntegersWithSameEnds(char *str, int K)
{
    int n = strlen(str);
    int nums[n], c = 0;

    for (int i = 0; i <= n - K; i++) {
        if (str[i] != '0' && str[i] == str[i + K - 1]) {
            int v = 0;
            for (int j = i; j < i + K; j++)
                v = v * 10 + (str[j] - '0');
            nums[c++] = v;
        }
    }

    boundedArray *res = (boundedArray*)malloc(sizeof(boundedArray));

    if (c == 0) {
        res->SIZE = 1;
        res->arr = malloc(sizeof(int));
        res->arr[0] = -1;
        return res;
    }

    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (nums[i] > nums[j]) {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    }

    res->arr = malloc(sizeof(int) * c);
    res->SIZE = c;

    for (int i = 0; i < c; i++) {
        res->arr[i] = nums[i];
    }

    return res;
}