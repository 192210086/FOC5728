#include <stdio.h>

int main() {
   
    int num1, num2, temp;

    
    num1 = 10;
    num2 = 20;

    
    printf("Name: Venkata kiran Y\n");
    printf("Reg No: 192210086\n");

    
    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    
    temp = num1;
    num1 = num2;
    num2 = temp;

    
    printf("After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}


