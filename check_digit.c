#include<stdio.h>
#include<string.h>
// c program to check number of alphabet digits and special characters in a string
int main()
{
    char str[100];
    int i, len;
    int flag = 0;
    int alpha, digit, special;
    alpha = digit = special = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i < len ;i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);
    return 0;
}
