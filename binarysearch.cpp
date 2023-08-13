#include<iostream>
using namespace std;
int Binary_Search(int arr[],int n,int x){
int first=0,last =n-1;
while(first<=last){
int mid= (first + last)/2;
if(arr[mid]==x){
return mid;
}
else if(arr[mid] < x){
first= mid+1;
}
else{
last= mid-1;
}
}
 return -1;



}


int main(){
int arr[]= {1,2,3,4,5};
cout<<"Enter the number to search"<<endl;
int x;
cin>>x;
int result= Binary_Search(arr,5,x);
cout<<result;


}