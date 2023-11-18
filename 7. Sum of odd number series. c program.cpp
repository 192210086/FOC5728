#include <stdio.h>

int main() {
   
    printf("Name: Venkata kiran.Y\n");
    printf("Reg No: 192210086\n\n");

   
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    int sum = (n + 1) / 2 * ((n + 1) / 2);

    
    printf("Sum of the odd number series 1 to %d: %d\n", n, sum);

    return 0;
}

