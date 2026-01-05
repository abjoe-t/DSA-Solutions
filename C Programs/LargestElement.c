#include <stdio.h>
int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int max = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > max) max = arr[i];
    printf("Largest in given array is %d", max);
    return 0;
}
