//write a program to print the following pattern ( for n = 3) :
/*  
         *
       * *
     * * *
 */
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<" enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while ( i <= n){
        int space  = 1;
        while ( space <= n - i){
            cout<<" ";
            space++;
        }        int j = 1;
        while ( j <= i){
            cout<<"*"<<" ";
            space++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}