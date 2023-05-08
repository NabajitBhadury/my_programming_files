#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Complete the following function.

void calculate_the_maximum(int n, int k) {
  // Write your code here.
  //   void calculate_the_maximum(int n, int k) {
  // Write your code here.
  int max_or = 0, max_and = 0, max_xor = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 2; j <= n; j++) {
      int and = i & j;
      if (and > max_and && and < k) {
        max_and = and;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 2; j <= n; j++) {
      int or = i | j;
      if (or > max_or && or < k) {
        max_or = or ;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 2; j <= n; j++) {
      int xor = i ^ j;
      if (xor > max_xor && xor < k) {
        max_xor = xor;
      }
    }
  }
      printf("%d\n%d\n%d",max_and,max_or,max_xor);
}

int main() {
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);

  return 0;
}
