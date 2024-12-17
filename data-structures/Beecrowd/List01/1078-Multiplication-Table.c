#include <stdio.h>

int main() {
    int i, number, result;

    scanf("%d", &number);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, number, number * i);
    }

    return 0;
}
