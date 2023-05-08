#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


   


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,count;
    // scanf("%d",&n);  
     char str[1000];
     fgets(str,1000,stdin);
    n = strlen(str);
    // char j;
     for(int i = 0;i<n-1;i++){
        count = 0;
         if(str[i]=='\0'){
             continue;
         }
         for(char j = '0';j<='9';j++){
            if(str[i] == j){
                count ++;
                str[i] = '\0';
            }
         }
         printf("%d ",count);
     }   
    
    return 0;
}