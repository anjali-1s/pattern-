// write a program to print the following pattern ( for n = 4)
/*
   1
   2 3
   3 4 5 
   4 5 6 7
*/
#include <iostream>
using namespace std;
 /* int main(){
         int n;
         cout<<" Enter the value of n :"<<endl;
         cin>>n;
         int i = 1 , print = 1;
         while ( i <= n){
            int j = 1 , print = i;
            while ( j <= i){
                cout<<print<<" ";
                print++;
                j++;
            }
            cout<<endl;
            i++;
         }
         return 0;
}
*/
// without using print variable
int  main (){
    int n ;
    cout<<" enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while ( i <= n){
        int j = i;
            while ( j < i * 2 ){
                cout<<j<<" ";
                j++;
            }
            cout<<endl;
            i++;
        }
        return 0;
    }
