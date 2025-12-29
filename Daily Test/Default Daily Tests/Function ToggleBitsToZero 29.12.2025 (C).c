int toggleBitsToZero(int SIZE, int *arr)
{
    int s=0;
    for(int i=0;i<SIZE;i++){
        s+=arr[i] & 0xAAAAAAAA;
    }
    return s;

}