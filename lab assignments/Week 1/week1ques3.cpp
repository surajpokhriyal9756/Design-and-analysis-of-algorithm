#include<bits/stdc++.h>
using namespace std;

void jumpSearch(int arr[],int key,int n);

int main()
{

    int n,key;
    cout<<"Enter size of array(n) ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" Enter key to search : ";
    cin>>key;
    jumpSearch(arr,key,n);
    return 0;

}

void jumpSearch(int arr[],int key,int n)
{
    int m=sqrt(n);
    int flag=0;
    int prev=0;
    do{
        if(arr[m]<key)
            m=m*2;
        else{
                prev=m/2;
        while(prev<=m)
        {

            if(arr[prev]==key)
            {
             cout<<"\nElement found in index : "<<prev;
             flag=1;
             exit(0);
            }
            else prev++;
        }
        }
    }while(m<n&&flag==0);
    if(flag==0)
    {
        cout<<"Element not found"<<endl;
    }

}
