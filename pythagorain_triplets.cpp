#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    
    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }
}

int32_t main(){
    int x,y,z;
    cin>>x>>y>>z;
    if (check(x,y,z))
    {
        cout<<"Yes Triplets"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
    
    
    
    return 0;
}