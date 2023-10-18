

#include <stdio.h>

int recur(int n, int p) {
    if (p == 0) {
        return 1;
    } else {
        return n * recur(n, p - 1);
    }
}

int main() {
    int n, p;
    printf("enter base: ");
    scanf("%d", &n);
    printf("enter exponent: ");
    scanf("%d", &p);
    
    int result = recur(n, p);
    printf("result: %d\n", result);
    
    return 0;
}