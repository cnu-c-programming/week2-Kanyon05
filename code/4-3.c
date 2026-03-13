#include <stdio.h>

int main() {
    
    int n;
    _Bool isPrime = true;

    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }


    printf("%s", isPrime ? "true" : "false");

    return 0;
}
