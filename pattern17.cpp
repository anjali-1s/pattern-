// write a program to print the following pattern ( for n = 4) :
/*
   D
   C D
   B C D
   A B C D
*/
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<" enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while ( i <= n){
        int j = 1;
        char ch = 'A' + n - i;
        while ( j <= i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}