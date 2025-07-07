#include <stdio.h>

int main() {
    int num, Num2, sum = 0, product = 1, lastDigit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    Num2 = num; 

    
    while (num > 0) {
        lastDigit = num % 10; 
        sum += lastDigit;     
        product *= lastDigit; 
        num /= 10;            
    }

    
    if (sum == product) {
        printf("%d is a Spy Number.\n", Num2);
    } else {
        printf("%d is not a Spy Number.\n", Num2);
    }

    return 0;
}