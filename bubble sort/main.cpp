#include<iostream>

using namespace std;

int main()
{
    int A[100],n,i,temp;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    cout<<"Enter The Array : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    cout<<"\nThe Sorted Array Is : ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
}