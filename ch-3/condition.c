#include <stdio.h>
int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nYou are eligible to vote");
    }
    else if (age > 13 && age < 18)
    {
        printf("\n i am a teenager ");
    }
    else if (age < 1)
    {
        printf("enter valiod age");
    }
    else
    {
        printf("i am child");
    };
    return 0;
}