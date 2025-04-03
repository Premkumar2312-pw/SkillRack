boundedArray* getThreeOrFourDigits(int SIZE, int arr[])
{
    boundedArray* result = (boundedArray*)malloc(sizeof(boundedArray));

    result -> arr = (int*)malloc(SIZE*sizeof(int));

    int count = 0;

    for(int i=0;i<SIZE;i++){
        if ((arr[i]>=100 && arr[i]<=999) || (arr[i]>=1000 && arr[i]<=9999)){
            result -> arr[count++] = arr[i];
        }
    }

    if(count==0){
        result -> SIZE = 1;
        result -> arr[0] = -1;
    }else{
        result -> SIZE = count;
    }
    return result;
    
}