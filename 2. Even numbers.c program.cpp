#include <stdio.h>

int main() {
    
    printf("Name: Venkata kiran.Y\n");
    printf("Reg No: 192210086\n\n");

   
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even Number Series 2 to %d:\n", n);

    
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
