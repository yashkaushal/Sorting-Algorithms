#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    void quicksort(int a[],int p,int r);
    int size;
    cin>>size;
    int array[size];
    for(int i=1;i<size+1;i++)
    {
        cin>>array[i];
    }
    quicksort(array,1,size);
    for(int i=1;i<size+1;i++)
    {
        cout<<array[i]<<endl;
    }
    
    
    return 0;
}

void quicksort(int a[],int p,int r)
{
    int partition(int a[],int p,int r);
    if(p<r)
    {
        int q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
    
}


int partition(int a[],int p,int r)
{
    int s=p+ (r-p)/2;
    int x=a[s];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            int z;
            z=a[i];
            a[i]=a[j];
            a[j]=z;
            
        }
    }
    int z;
    z=a[i+1];
    a[i+1]=a[r];
    a[r]=z;
    return(i+1);
}



