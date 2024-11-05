#include<stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    while (count < 5) {
        int flag = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", n);
            count++;
        }
        n++; 
    }
    return 0;
}
