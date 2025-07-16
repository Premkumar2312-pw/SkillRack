int addSubtract(char *str)
{
    int arr[1000];
    int idx = 0;
    int i = 0;
    while(str[i]){
        if(str[i] == '-' || isdigit(str[i])){
            int j = (str[i]=='-')?i+1:i;
            long num = 0;
            while(j < strlen(str) && isdigit(str[j])){
                num = num * 10 + str[j] - '0';
                j++;
            }
            if(str[i] =='-') arr[idx++] = -num;
            else arr[idx++] = num;
            i = j;
        }
        i++;
    }
    int prev = 1,sum = arr[0];
    for(int i=1;i<idx;i++){
        if(prev){
            sum += arr[i];
        }
        else{
            sum -=arr[i];
        }
        prev = !prev;
    }
    
    return sum;
}