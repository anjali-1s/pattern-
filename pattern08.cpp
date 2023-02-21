// write a program to print the following pattern ( for n = 4) :
/*
    1 
    2 1
    3 2 1
    4 3 2 1
*/
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<" Enter the value of n :"<<endl;
    cin>>n;
    int i = 1 ;
    int print = 1;
    while ( i <= n) {
        int j = 1 , print = i;
        while ( j <= i){
            cout<<print<<" ";
            print--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}