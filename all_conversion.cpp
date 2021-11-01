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

int oct_to_dec(int n){
    int ans=0;
    int x=1;
    while (n>0)
    {
        /* code */
        int y=n%10;
        ans +=x*y;
        x*=8;
        n/=10;
    }
    return ans;
    
}

int hex_to_dec(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for (int i = s-1; i >=0; i--)
    {
        /* code */
        if (n[i]>='0' && n[i]<='9'){
            ans +=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
    
}

int dec_to_bin(int n){
     int x=1,ans=0;
     while(n>0){
         ans+=(n%2)*x;
         n/=2;
         x*=10;
        
     }
     return ans;
}

int dec_to_oct(int n){
     int x=1,ans=0;
     while(n>0){
         ans+=(n%8)*x;
         n/=8;
         x*=10;
        
     }
     return ans;
}

string dec_to_hex(int n){
     int x=1;
     string ans="";
     while(n>0){
        int y=n%16;
         n/=16;
        cout<<n;
         if (y<=9)
         {
             /* code */
             ans =ans+ (to_string(y*x));
             
         }
         else{
             char c=('A' + y -10)*x;
             ans.push_back(c);
         }
         x*=10;
        
     }
     return ans;
}

int32_t main(){
    int n;
    // string n;
    cin>>n;
    cout<<dec_to_hex(n)<<endl;
    return 0;
}