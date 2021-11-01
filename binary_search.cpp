#include <iostream>
using namespace std;

int binary_search(int n, int a[],int key){
    int s=0,e=n;

    while(s<=e){
        int mid=(s+e)/2;
        if (a[mid]==key)
        {
            return mid;
        }
        else if( a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        

    }
    return -1;
}



int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binary_search(n,a,key)<<endl;

    return 0;
}