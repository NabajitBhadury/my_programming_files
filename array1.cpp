// #include <iostream>
// using namespace std;

// int is_sum(int n){

//   if()

// }


// int main(){
// //     int marks[4]={24,19,45,35};
// //     cout<<marks[1]<<endl;
// //     string name[4]={"Ali","Miku","Pako","Nabu"};
// //     cout<<name[1]<<endl;
// //     int i=0;
// //     while(i<4){
// //        cout<<marks[i]<<endl;
// //        i++;
// //      }
   
// //     return 0;

// int n;
// cin>>n;


// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[5];
//     for(int i=0;i<5;i++){
//           cin >>array[i];
//        }
//         cout<<array[];
       

//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student{
    private:
        int scores[5];
    public:
        void input(){
            for(int i=0;i<=4;i++){
                cin>>scores[i];
            }
        }
        
        int calculateTotalScore(){
            int sum=0;
            for(int j=0;j<=4;j++){
                sum = sum+scores[j];
                return sum;
            }
        }  
};
// Write your Student class here

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
