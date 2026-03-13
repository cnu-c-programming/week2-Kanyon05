#include <stdio.h>

int main() {
    
    int n;
    boolean isPrime = true;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    
    printf("%s", isPrime ? "true" : "false");

    return 0;
}
