// write a program to print the following pattern ( for n = 4 ) :
/*
    1 2 3 4 
    1 2 3 4 
    1 2 3 4
    1 2 3 4
*/
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<" Enter the value of n :"<<endl;
    cin>>n;
    int i = 1;
    while ( i <= n){
        int j = 1;
        while ( j <= n){
            cout<<j<<" ";
             j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}