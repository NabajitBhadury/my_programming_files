#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i = 0;i<num/2;i++){
        temp = arr [i];
        arr [i] = arr [num - i];
        arr[num-i] = temp;
    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

