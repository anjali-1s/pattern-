// write a program to print the following pattern ( for  n= 4) :
/*    
     1 2 3 4
       2 3 4
         3 4
           4
*/
#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<" enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while ( i <= n){
        int j = i;
        int space = 1;
        while ( space <= i - 1){
            cout<<" ";
            space++;
        }
        while ( j <= n  ) {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}