#include<stdio.h>

int main()
{
    int  row;
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        int num =  1 ;
        for (int  k = 1; k <= row - i ; k++)
        {
            printf(" ");
        }
        for (int  j = 0; j <= i ; j++)    
        {
            printf("%2d",num);
            num = num*(i - j)/(j + 1);      //  
        }
        printf("\n");
        
    }
    

    return 0;
}