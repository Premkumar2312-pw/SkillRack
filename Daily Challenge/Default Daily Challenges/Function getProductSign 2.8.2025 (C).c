int getProductSign(int SIZE, int arr[])
{
    int neg = 0;
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] == 0) return 0;
        if(arr[i] < 0) neg++;
    }
    return (neg % 2 == 0) ? 1 : -1;
}