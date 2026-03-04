#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
    char monthStr[10];
};

int getMonth(char *m) {
    char *months[]={"JAN","FEB","MAR","APR","MAY","JUN",
                    "JUL","AUG","SEP","OCT","NOV","DEC"};
    for(int i=0;i<12;i++)
        if(strcasecmp(m,months[i])==0)
            return i+1;
    return 0;
}

int compare(const void *a,const void *b){
    struct Date *d1=(struct Date*)a;
    struct Date *d2=(struct Date*)b;

    if(d1->year != d2->year)
        return d1->year - d2->year;
    if(d1->month != d2->month)
        return d1->month - d2->month;
    return d1->day - d2->day;
}

int main(){
    int n;
    scanf("%d",&n);

    struct Date arr[n];

    for(int i=0;i<n;i++){
        scanf("%d-%[^-]-%d",
              &arr[i].day,
              arr[i].monthStr,
              &arr[i].year);
        arr[i].month = getMonth(arr[i].monthStr);
    }

    qsort(arr,n,sizeof(struct Date),compare);

    for(int i=0;i<n;i++)
        printf("%d-%s-%d\n",
               arr[i].day,
               arr[i].monthStr,
               arr[i].year);

    return 0;
}