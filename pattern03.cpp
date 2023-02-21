// write a program to print the following pattern ( for n = 3) :
/*
    1 2 3 
    4 5 6 
    7 8 9
*/
#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<" Enter the value of n :"<< endl;
    cin>>n;
    int i = 1 , print = 1;
    while ( i <= n){
        int j = 1 ;
        while ( j <= n){
            cout<<print<<" ";
            print++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
