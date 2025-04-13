#include <stdbool.h>
char* getUniqueUnitDigits(int SIZE, int arr[]) {
    bool seen[10] = {false};
    char* result = (char*)malloc(11);
    int k = 0;
    for (int i = 0; i < SIZE; i++) {
        int unit = arr[i] % 10;
        if (!seen[unit]) {
            seen[unit] = true;
            result[k++] = unit + '0'; 
        }
    }
    result[k] = '\0'; 
    for(int i=0;i<k;i++){
        for(int j=0;j<k-1-i;j++){
              if((int)result[j] < (int)result[j+1])        {
                  char t=result[j];
                   result[j]=result[j+1];
                   result[j+1]=t;
}
}
}
    return result;
}


DC