#include<bits/stdc++.h>
using namespace std;

int bin_to_dec(int n){
    int ans=0;
    int x=1;
    while (n>0)
    {
        /* code */
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
    
}

int32_t main(){
    int n;
    cin>>n;
    cout<<bin_to_dec(n)<<endl;
    return 0;
}