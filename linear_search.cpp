#include<iostream>
using namespace std;

int lsearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]==key)
        {
            /* code */
            return i;
        
        }
    
    }
    return -1;
}

int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cin>>key;
    cout<<lsearch(arr,n,key)<<endl;
    return 0;
}