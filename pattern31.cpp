// write a program to print the following pattern ( for n = 4) :
/*
                * * * * 
                 * * *
                  * *
                   *
                   * 
                  * *
                 * * *
                * * * * 
*/
#include <iostream>
using namespace std;
    int main (){
        int n;
        cout<<" enter the value of n :"<<endl;
        cin>>n;
        // part ------> 1
        int i = 1 ;
        while ( i <= n){
            int j = 1;
            int space = 1;
            while ( space <= i - 1){
                cout<<" ";
                space++;
            }
            while ( j <= n - i + 1 ){
                cout<<"*"<<" ";
                j++;
            }
        cout<<endl;
        i++;
        } 
        // part ------> 2
         i = 1;
        while( i <= n){
            int j = 1;
            int space = 1;
            while ( space <= n - i){
                cout<<" ";
                space++;
            }
            while ( j <= i){
                cout<<"*"<<" ";
                j++;
            }
            cout<<endl;
            i++;
        }       
 return 0;
    }