#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int numberOfElements, indexPosition;
    scanf("%d", &numberOfElements);

    int marks[numberOfElements], sortedMarks[numberOfElements], uniqueMarks[numberOfElements], count = 0;
    for (int i = 0; i < numberOfElements; i++) {
        scanf("%d", &marks[i]);
        sortedMarks[i] = marks[i];
    }

    scanf("%d", &indexPosition);
    qsort(sortedMarks, numberOfElements, sizeof(int), compare);

    uniqueMarks[count++] = sortedMarks[0];
    for (int i = 1; i < numberOfElements; i++) {
        if (sortedMarks[i] != sortedMarks[i - 1]) {
            uniqueMarks[count++] = sortedMarks[i];
        }
    }

    int rankMap[101] = {0};  
    for (int i = 0; i < count; i++) {
        rankMap[uniqueMarks[i]] = i + 1;
    }

    printf("%d\n", rankMap[marks[indexPosition - 1]]);
    return 0;
}
