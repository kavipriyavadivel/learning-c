#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < n; j++) {
        int min = arr[j];
        int min_index = j;
        for(int i = j; i < n; i++) {
            if(min > arr[i]) {
                min = arr[i];
                min_index = i;
            }
        }
        int temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
