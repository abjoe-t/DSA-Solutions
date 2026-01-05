#include <stdio.h>
int main() {
    int arr[] = {2, 4, 0, 1, 9};
    int target = 1;
    for(int i=0; i<5; i++) {
        if(arr[i] == target) {
            printf("Found at index %d", i);
            return 0;
        }
    }
    printf("Not found");
    return 0;
}
