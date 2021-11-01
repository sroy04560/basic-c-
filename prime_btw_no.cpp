#include<iostream>
using namespace std;

int main(){
    int a,b,i,num;

    cin>>a>>b;
    for( i=a;i<b;i++){
        for (num = 2; num < i; num++)
        {
            if(i%num==0){
                break;
            }
        }
        if(i==num){
            cout<<i<<endl;
        }
        
    }
    return 0;
}