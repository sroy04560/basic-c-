#include<iostream>
using namespace std;

void fibo(int n,int sum){
    int t1=0,t2=1;
    for (int i = 0; i <= n; i++)
    {
        cout<<t1<<"  "<<endl;
        sum=t1+t2;
        t1=t2;
        t2=sum;
    }
    
}

int main(){
    int n,sum=0;
    cin>>n;
    fibo(n,sum);
    
}