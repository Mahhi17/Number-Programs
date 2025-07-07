    #include <stdio.h>

    
    int isMagicNumber(int num) 
    {
        while (num > 9) 
        { 
            int sum = 0;
            while (num > 0)
             { 
                sum += num % 10;
                num /= 10;
            }
            num = sum; 
        }
        return (num == 1); 
    }

    int main()
     {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (isMagicNumber(number))
         {
            printf("%d is a Magic Number.\n", number);
        } 
        else
         {
            printf("%d is not a Magic Number.\n", number);
        }
        return 0;
    }