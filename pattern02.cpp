// write a program to print the following pattern ( for n = 4)
/*
      4 3 2 1 
      4 3 2 1 
      4 3 2 1
      4 3 2 1
*/
#include <iostream>
using namespace std;
int main ()
{
    int n ;
    cout<<" enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while( i <= n){
        int j = n ;
        while ( j > 0){
            cout<< j <<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
     return 0;
 }