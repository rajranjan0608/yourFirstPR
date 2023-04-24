    #include <stdio.h>
    int main()
    {
        int number, originalNumber, remainder, result = 0;
        printf("Enter a four digit integer: ");
        scanf("%d", &number);
        originalNumber = number;
        while (originalNumber != 0)
        {
            remainder = originalNumber%10;
            result += remainder*remainder*remainder*remainder;
            originalNumber /= 10;
        }
        if(result == number)
            printf("%d is an four digit Armstrong number.",number);
        else
            printf("%d is not an four digit Armstrong number.",number);
        return 0;
    }
