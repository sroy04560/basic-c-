#include<bits/stdc++.h>
using namespace std;




int reverse(int n){
    int ans=0;
    while (n>0)
    {
        /* code */
        int last=n%10;
        ans=ans*10+last;
        n/=10;
    }
    
}






int add_2_binary(int a,int b){
    int ans=0,prev=0;
    while(a>0 && b>0){
        if(a%2==0 &&b%2==0){
            ans=ans*10+prev;
            prev=0;
        }
        else if((a%2==0 && b%2==1) ||(a%2==1 && b%2==0)){
            if (prev==1)
            {
                /* code */
                ans=ans*10+0;
                prev=1;
            }
            else{
                ans=ans*10+1;
                prev=0;

            
        }
        }
        else{
            ans=ans*10+prev;
            prev=1;
            }
        a/=10;
        b/=10;
            
        }
        while (a>0)
        {
            /* code */
            if(prev==1){
               if(a%2==1){
                    ans=ans*10+0;
                    prev=1;
               }
                else{
                ans=ans*10+1;
                prev=0;
            
            }
            
            }
            else{
                ans=ans*10+(a%2);
            }
            a/=10;
        }

           while (b>0)
        {
            /* code */
            if(prev==1){
               if(b%2==1){
                    ans=ans*10+0;
                    prev=1;
               }
                else{
                ans=ans*10+1;
                prev=0;
            
            }
            
            }
            else{
                ans=ans*10+(b%2);
            }
            b/=10;
        }
    if(prev==1){
        ans=ans*10+1;
    } 
    ans=reverse(ans);
    return ans;
}


int32_t main(){
    int a,b;
    cin>>a>>b;
    cout<<add_2_binary(a,b)<<endl;
}