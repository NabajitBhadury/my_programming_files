#include <stdio.h>

void merge(int a[], int lb, int m, int ub) {
    int i = lb, j = m + 1, k = lb, b[100];
    while (i <= m && j <= ub) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= m) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= ub) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = lb; i <= ub; i++) {
        a[i] = b[i];
    }
}

void msort(int a[], int lb, int ub) {
    int m;
    if (lb < ub) {
        m = (lb + ub) / 2;
        msort(a, lb, m);
        msort(a, m + 1, ub);
        merge(a, lb, m, ub);
    }
}

void printdata(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }
}

int main() {
    int arr[100], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    printf("Enter the unsorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The unsorted list is: ");
    printdata(arr, n);
    msort(arr, 0, n - 1);
    printf("\n\nThe sorted list is:\n");
    printdata(arr, n);
    return 0;
}

