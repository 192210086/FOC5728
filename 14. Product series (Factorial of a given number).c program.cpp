#include <stdio.h>

int main() {
    printf("Name: Venkata kiran Y\n");
    printf("Reg No: 192210086\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int product = 1;

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product series (Factorial) of %d is: %d\n", n, product);

    return 0;
}

