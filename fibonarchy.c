#include<stdio.h>

int find_fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if (n == 1) 
    {
        return 1;
    }
    else 
    {
        return find_fib(n-1) + find_fib(n-2);
    }
}

int main()
{
    int n;
    printf("Input the number :: ");
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        printf("%d\t",find_fib(i));
    }
}