#include<iostream>
using namespace std;

int swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    
}

int parti(int a[],int l,int h){
    int pivot=a[l];
    int i=l;
    int j=h;
    while (i<j)
    {
        /* code */
        while (a[i]<=pivot)
        {
            /* code */i++;
        }
        while (a[j]>=pivot)
        {
            /* code */j--;
        }
        if (i<j)
        {
            /* code */
            swap(a,i,j);
        }
        
    }
    swap(a,j,l);
    return j;
    
}

int output(int a[],int l,int h){
    for (int i = l; i <= h; i++)
    {
        /* code */
        cout<<a[i];
    }cout<<endl;
    
}
int quick_sort(int a[],int l,int h,int n){
   
    if (l<h)
    {
        /* code */
       int pivot=parti(a,l,h);
        quick_sort(a,l,pivot-1,n);
        quick_sort(a,pivot+1,h,n);
        //return pivot;
    }
    
}



int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[n];
    }
    int l=0;
    int h=n;
    quick_sort(a,l,h,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i];
    }cout<<endl;
    
    
}