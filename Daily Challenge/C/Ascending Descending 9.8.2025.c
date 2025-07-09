#include <stdio.h>

int is_asc(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        if(arr[i] > arr[i+1]) return 0;
    return 1;
}

int is_desc(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        if(arr[i] < arr[i+1]) return 0;
    return 1;
}

int all_equal(int arr[], int n) {
    for(int i = 1; i < n; i++)
        if(arr[i] != arr[0]) return 0;
    return 1;
}

void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int m, n, a[100], b[100];
    scanf("%d", &m);
    for(int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);

    int ae = all_equal(a, m), be = all_equal(b, n);
    if (ae && be) {
        if (a[0] < b[0]) { print_array(a, m); print_array(b, n); }
        else if (b[0] < a[0]) { print_array(b, n); print_array(a, m); }
        else { print_array(a, m); print_array(b, n); }
    }
    else if (is_asc(a, m) && is_desc(b, n)) {
        print_array(a, m); print_array(b, n);
    }
    else if (is_desc(a, m) && is_asc(b, n)) {
        print_array(b, n); print_array(a, m);
    }
    else {
        print_array(a, m); print_array(b, n);
    }
    return 0;
}
