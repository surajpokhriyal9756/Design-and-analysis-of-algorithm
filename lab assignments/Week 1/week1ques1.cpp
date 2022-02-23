#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter number of test cases = ";
    cin>>t;
    while(t)
    {

        int n,key,flag=0;
        cout<<"Enter size of array = "<<endl;
        cin>>n;
        cout<<"Enter array = "<<endl;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter key = "<<endl;
        cin>>key;

        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
             cout<<"Element found in "<<i+1<<" passes"<<endl;
             flag=1;
             break;
            }
        }
        if(flag==0)
        {
            cout<<"Element not found...."<<endl;
        }
      t--;
    }

}
