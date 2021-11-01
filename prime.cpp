#include<iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    for ( i = 2; i <n; i++)
    {
        if(n%i==0){
            cout<<n <<" Not a prime no"<<endl;
            break;
        }        
        
    }
    if (i==n)
    {
        cout<<n<<"Prime no"<<endl;
    }
    
    
    return 0;
}