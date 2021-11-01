#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int temp=n;
    while (n>=0)
    {
        int last=n%10;
        sum=sum+(last*last*last);
        n=n/10;
    }
    if (temp==sum)
    {
        cout<<"Armstrong No "<<sum<<endl;
    }
    else{
        cout<<"Not Armstrong "<<sum<<endl;
    }
    
    return 0;
}