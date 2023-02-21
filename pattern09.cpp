// write a program to print the following pattern ( for n = 3 ) :
/*
    A A A 
    B B B 
    C C C
*/
#include <iostream>
using namespace std;
int main(){
            int n;
            cout<<" Enter the value of n :"<<endl;
            cin>>n;
            int i = 1;
            char ch = 'A';
            
            while ( i <= n){
                int j = 1 ;
                char ch = 'A' + i - 1;
                while ( j <= n){
                    cout<<ch<<" ";                    
                    j++;
                }
                cout<<endl;
                i++;
        
            }
            return 0;
}