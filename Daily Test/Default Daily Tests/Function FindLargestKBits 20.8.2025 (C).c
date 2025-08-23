int findLargestKBits(char *str, int k)
{
    long maxi = 0;
    for(int i=0; i<=strlen(str)-k; i++){
        int bin[k];
        int idx = 0;
        for(int j=i; j<i+k; j++){
            bin[idx++] = str[j] - '0';
        }

        long curr = 0;
        long base = 0;
        for(int j=idx-1; j>=0; j--){
            if(bin[j] == 1){
                curr += pow(2, base);
            }
            base += 1;
        }

        if(curr > maxi){
            maxi = curr;
        }
    }
    return maxi;
}