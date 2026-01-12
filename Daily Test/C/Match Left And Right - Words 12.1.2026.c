#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001], s2[1001];
    fgets(s1, 1001, stdin);
    fgets(s2, 1001, stdin);

    char *l = strtok(s1, " \n");
    char *r[1000];
    int used[1000]={0}, rc=0;

    char *t = strtok(s2, " \n");
    while(t) r[rc++] = t, t = strtok(NULL, " \n");

    while(l){
        char ch = l[strlen(l)-1];
        for(int i=0;i<rc;i++){
            if(!used[i] && r[i][0]==ch){
                printf("%s%s ", l, r[i]+1);
                used[i]=1;
                break;
            }
        }
        l = strtok(NULL, " \n");
    }
    return 0;
}