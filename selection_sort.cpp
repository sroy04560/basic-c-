#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
     int temp;
    for (int  i = 0; i < n-1; i++)
    {
        /* code */
        for (int j = i+1; i < n; j++)
        {
            /* code */
            if (arr[j]<arr[i])
            {
                /* code */
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}