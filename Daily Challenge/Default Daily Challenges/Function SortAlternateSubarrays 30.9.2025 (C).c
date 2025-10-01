void sortAlternateSubarrays(int SIZE, int *arr, int k)
{
    int c=1;
    for(int i=0; i<SIZE; i+=k){
        if(c%2==0){c+=1; continue;}
        else{
            for(int j=0; j<k-1; j++){
                for(int m=i; m<i+k-j-1; m++){
                    if(arr[m] > arr[m+1]){
                        int t = arr[m];
                        arr[m] = arr[m+1];
                        arr[m+1] = t;
                    }
                }
            }
        }
        c+=1;
    }
}
