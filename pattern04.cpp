// write a program to print the following pattern ( for n = 4) :
/*
   *
   * *
   * * * 
   * * * * 
*/
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<" Enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while ( i <= n){
        int j = 1;
        while ( j <= i){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}