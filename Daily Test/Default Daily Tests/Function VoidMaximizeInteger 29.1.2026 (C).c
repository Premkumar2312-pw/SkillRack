void maximizeInteger(int m, int arr1[m], int n, int arr2[n])
{
    int a[n],temp;
    for(int i=0;i<n;i++){
        a[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr2[i]<arr2[j]){
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    int k=0;
    for(int i=0;i<m && k<n;i++){
        if(arr2[k]>arr1[i]){
            arr1[i]=arr2[k];
            k++;
        }
    }
}
DT