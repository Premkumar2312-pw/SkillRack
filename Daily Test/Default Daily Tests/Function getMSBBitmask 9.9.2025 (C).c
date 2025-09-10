int getMSBBitMask(int SIZE, int arr[]) {
    int result = 0;
    for (int i = 0; i < SIZE; i++) {
        int num = arr[i];
        int msb = 0;
        while (num > 1) {
            num >>= 1;
            msb++;
        }
        result |= (1 << msb);
    }
    return result;
}