#include<stdio.h>

int find_gcd(int n1,int n2)
{
    if(n1 == n2)
    {
        return n1;
    }
    else 
    {
        if(n1 > n2)
        {
            return find_gcd(n1-n2,n2);
        }
        else
        {
            return find_gcd(n1,n2-n1);
        }
    }
    
}

int main()
{
    int n1,n2;
    printf("input two numbers :: ");
    scanf("%d %d", &n1, &n2);
    find_gcd(n1,n2);
    printf("%d in the gcd of %d,%d", find_gcd(n1,n2),n1,n2);
    return 0;
}