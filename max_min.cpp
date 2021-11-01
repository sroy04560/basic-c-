#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n,maxno,minno;
    
   
    cin>>n;
     int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    maxno=INT_MIN;
    minno=INT_MAX;
    for (int i = 0; i <n; i++)
    {
        /* code */
        // if (arr[i]>maxno)
        // {
        //     /* code */
        //     maxno=arr[i];
        // }

        maxno=max(maxno,arr[i]);
        //     if (arr[i]<minno)
        // {
        //     /* code */
        //     minno=arr[i];
        // }
        minno=min(minno,arr[i]);
    
        
    }
             
    cout<<n;
    cout<<maxno;
    cout<<minno<<endl;
    return 0;
}