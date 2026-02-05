#include <stdio.h>
#include <math.h>

int shiftAndCompareBits(int N, int X) {
    if (N == 0) return 1; // Special case for 0

    // Step 1: Find the number of bits in N
    int temp = N;
    int bitCount = 0;
    while (temp > 0) {
        bitCount++;
        temp >>= 1;
    }

    // Ensure X is within the range of bitCount to avoid redundant rotations
    X = X % bitCount;

    // Step 2: Perform Circular Right Shift (Rotation)
    // M = (bits shifted right) OR (bits that wrapped around to the left)
    int M = (N >> X) | ((N << (bitCount - X)) & ((1 << bitCount) - 1));

    // Step 3: Compare N and M bit by bit
    int matchingBits = 0;
    for (int i = 0; i < bitCount; i++) {
        // Extract the i-th bit from both N and M
        int bitN = (N >> i) & 1;
        int bitM = (M >> i) & 1;

        if (bitN == bitM) {
            matchingBits++;
        }
    }

    return matchingBits;
}
