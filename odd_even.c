/*
WAP for the print n odd and even number.
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d (Odd)\n ", i);
        } else {
            printf("%d (Even)\n ", i);
        }
    }
    return 0;
}
