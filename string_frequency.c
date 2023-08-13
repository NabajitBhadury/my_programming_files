
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //converting uppercase to lowercase without using any function and also uppercase to lowercase
    char str[100];
    int i,j,k,count=0;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]<='z' && str[i]>='a')
        {
            str[i]=str[i]-32;
        }
    }
    printf("The string is: %s\n",str);
   
    return 0;
}