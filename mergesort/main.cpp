#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int* mergesort(int m[],int n);
    int size;
    cin>>size;
    int array[size];
    int *pointer;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    pointer=mergesort(array,size);
    for(int i=0;i<size;i++)
    {
        cout<<*pointer;
        pointer++;
    }
    
    
    
}

int* mergesort(int m[],int n)
{
    
    int* merge(int left[],int right[],int n,int middle);
    if(n<2)
    {
        for(int i=0;i<n;i++)
        {
            cout<<m[i];
        }
    }
    int *pleft , *pright , *presult;
    int left[n],right[n],result[n];
    int middle=n/2;
    for(int i=0;i<middle;i++)
    {
        left[i]=m[i];
    }
    for(int i=middle;i<n;i++)
    {
        right[i]=m[i];
    }
    pleft=mergesort(left,middle);
    pright=mergesort(right,middle);
    presult=merge(left,right,n,middle);
    return presult;
    
}


int* merge(int left[],int right[],int n,int middle)
{
    int result[n];
    int* pres;
    while(middle>0)
    {
        for(int i=0;i<middle;i++)
        {
            if(left[i]<right[i])
                result[i]=left[i];
            else
                result[i]=right[i];	
        }
        middle=0;
        
    }
    pres=result;
    return pres;
}
