#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[n];
    }

    for (int i = 1; i < n; i++)
    {
        /* code */
        int temp=arr[i];
        int j=i-1;
        while (arr[j]>temp && j>=0)
        {
            /* code */
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
        
    }
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}