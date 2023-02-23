// write a program to print the following pattern ( for n = 4) :
/* 
 *  *  *  *
 *  *  *
 *  *
 *
*/
#include <iostream>
using namespace std ;
int main () {
              int n;
              cout<<" enter the value of n :"<<endl;
              cin>>n;
              int i = 1;
              while ( i <= n){
                int j = 1;
                while ( j <= n - i + 1){
                    cout<<" * "<<" ";
                    j++;
                }
                cout<<endl;
                i++;
              }
              return 0;
}