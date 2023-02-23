// write a program to print the following pattern ( for n = 3) :
/* 
   A B C 
   B C D
   C D E
*/
#include <iostream>
using namespace std;
int main() {
    int n ;
    cout<<" enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while ( i <= n){
        int j = 1;
        char ch = 'A' + i - 1;
        while ( j <= n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}