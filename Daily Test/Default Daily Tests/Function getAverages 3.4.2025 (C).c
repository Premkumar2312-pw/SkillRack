boundedArray* getAverages(int SIZE, int arr[])
{
 boundedArray* result = (boundedArray*)malloc(sizeof(boundedArray));

 result -> SIZE = SIZE/3;

 result -> arr = (double*)malloc(SIZE * sizeof(double));

 for(int i=0,j=0;i+2<SIZE;i+=3,j++){
     result -> arr[j] = (arr[i] + arr[i+1]+ arr[i+2]) / 3.0;
 }

 return result;
}