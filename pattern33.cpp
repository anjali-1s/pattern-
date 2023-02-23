// write a program to print the following pattern ( for n = 5) :
/*
           * * * * *
            * * * * *
             * * * * *
              * * * * *
               * * * * *
*/
#include <iostream>
using namespace std;
int main(){
            int n ;
            cout<<" enter the value of n :"<<endl;
            cin>>n;
            int i = 1;
            while ( i <= n){
                int space = 1;
                int j = 1;
                while ( space <= i - 1){
                    cout<<" ";
                    space++;
                }
                while( j <= n){
                     cout<<"*"<<" ";
                     j++;
                }
                cout<<endl;
                i++;
            }
            return 0;
}