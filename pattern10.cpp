// write a program to print the following pattern ( for n = 4) :
/* 
    A B C D
    A B C D
    A B C D
    A B C D
*/
#include <iostream>
using namespace std;
int main (){
            int n;
            cout<<" Enter the value of n :"<<endl;
            cin>>n;
            int i = 1;
            while ( i <= n){
                int j =1 ;
                char ch = 'A';
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