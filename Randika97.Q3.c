    #include <stdio.h>
    int main()
    {
        int number, i, temp = 0;
        printf("Enter a Positive Integer: ");
        scanf("%d", &number);
        for(i = 2; i <= number/2; ++i)
        {
            if(number%i == 0)
            {
                temp = 1;
                break;
            }
        }
        if (number == 1)
        {
          printf("1 is not a prime nor a composite ");
        }
        else
        {
            if (temp == 0)
              printf("%d is a prime number.", number);
            else
              printf("%d is not a prime number.", number);
        }

        return 0;
    }
