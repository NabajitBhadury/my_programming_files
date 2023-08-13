#include <stdio.h>

void print_arr(int *arr, int n) {

  for (int i = 0; i < n; i++) {
    printf("%d\t", arr[i]);
  }
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void sort_arr(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(&arr[i], &arr[i + 1]);
      i = -1;
    }
  }
}

int main(int argc, char *argv[]) {
  int n;

  printf("How many number will there be? :: ");
  scanf_s("%d", &n);

  int arr[n];

  putchar('\n');
  printf("Enter the numbers :: \n");

  for (int i = 0; i < n; i++)
    scanf_s("%d", &arr[i]);

  putchar('\n');
  print_arr(arr, n);

  sort_arr(arr, n);

  putchar('\n');
  print_arr(arr, n);

  return 0;
}
