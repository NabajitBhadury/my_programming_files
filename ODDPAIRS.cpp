#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int c=0;
        for(int i=1;i<x;i++)
        {
            for(int z=i+1;z<=x;z++)
            {
                if((i+z)%2!=0)
                {
                    c++;
                }
            }
        }
        cout<<c*2<<endl;
        
    }
}