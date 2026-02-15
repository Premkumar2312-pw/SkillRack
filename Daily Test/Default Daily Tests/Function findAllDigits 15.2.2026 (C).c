int findAllDigits(int SIZE, int arr[])
{
    int seen[10] = {0};
    int j = 0;

    for (int i = 0; i < SIZE; i++) {
        int temp = (arr[i] < 0) ? -arr[i] : arr[i];

        do {
            int d = temp % 10;

            if (seen[d] == 0) {
                seen[d] = 1;
                j++;
            }

            temp /= 10;

        } while (temp > 0);

        if (j == 10) {
            return arr[i];
        }
    }

    return -1;
}