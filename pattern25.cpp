// write a program to print the following pattern ( for n = 4):
/*  
        1
      2 3
    4 5 6
  7 8 9 10
*/
#include <iostream>
using namespace std;
int main () {
          int n ;
           cout<<" enter the value of n :"<<endl;
           cin>>n;
           int i = 1;
           int num = 1;
           while ( i <= n){
            int j = 1 ;
            int space = 1;
            while ( space <= n - i ){
                cout<<" ";
                space++;
            }
            while( j <= i){
                cout<<num;
                num++;
                j++;
            }
            cout<<endl;
            i++;
           }
           return 0;
}