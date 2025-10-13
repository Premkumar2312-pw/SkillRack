#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d", 
        (N & 0xAAAAAAAA) >> 1 | ((N & 0x55555555) << 1)
    );
    return 0;
}