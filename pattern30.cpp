 // write a program to print the following pattern ( for n = 5) :
/*
              *
              * *
              * * *
              * * * *
              * * * * *
              * * * *  
              * * * 
              * *
              * 
*/
#include <iostream>
using namespace std;
int main(){
             int n;
             cout<<" enter the value of n :"<<endl;
             cin>>n;
             int i = 1;
             while( i <= n){
        // part ---------> 1
             int j = 1;
              while ( j <= i){
              cout<<"*"<<" ";
              j++;
        }
        cout<<endl;
        i++;
     }
      // part --------> 2
              i = 2;
             while ( i <= n){
                int j = 1;
                while( j <= n - i + 1 ){
                    cout<<"*"<<" ";
                    j++;
                }
        cout<<endl;
        i++;
    }
    return 0;
}