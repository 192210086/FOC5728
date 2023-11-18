#include <stdio.h>

int main() {
   
    printf("Name: Venkata kiran.Y\n");
    printf("Reg No: 192210086\n\n");

  
    int N;

   
    printf("Enter the value of N: ");
    scanf("%d", &N);

    
    int sum = 0;
    int sign = 1; 

    for (int i = 1; i <= N; i++) {
        sum += sign * i;
        sign = -sign; 
    }

   
    printf("Sum of the series 1 - 2 + 3 - 4 + 5 - ... + %d: %d\n", N, sum);

    return 0;
}

