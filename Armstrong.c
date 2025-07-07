#include <stdio.h>
#include <math.h>


int countDigits(int number)
 {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    
    return count;
}

int isArmstrong(int number)
 {
    int n = countDigits(number); 
    int originalNumber = number, remainder, result = 0;

    while (originalNumber != 0)
     {
        remainder = originalNumber % 10;
        result += pow(remainder, n); 
        originalNumber /= 10;
    }

    return (result == number); 
}

int main()
 {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (isArmstrong(number))
     {
        printf("%d is an Armstrong number.\n", number);
    }
     else 
     {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
