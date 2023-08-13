#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    int b;
    int i;
    // cin>>a;
    // cin>>b;
    scanf("%d %d", &a,&b);
    string array[9]={"one","two","three","four","five","six","seven","eight","nine"};
    // char array[9]={'one','two','three','four','five','six','seven','eight','nine'};
    for (int i=a;i<=b;i++){
        if(i<=9){
        // cout<<array[i-1]<<endl;
          printf("%s",array[i-1]);
        }
    }
         if(a>9){
            cout<<"nine"<<endl;
           // break;
        
        if (b>9) {
            cout<<"nine"<<endl;
        }   
        }
        //}
        
        
        if (a%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
        if (b%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    
     
     
     
    return 0;
}