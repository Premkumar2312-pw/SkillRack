arr = list(map(int, input().split()))

for num in arr:
    if len(str(num)) % 2 == 0:
        print(num, end=" ")


//Without Built-in 

int digits = 0;
int temp = num;

while(temp > 0){
    digits++;
    temp /= 10;
}