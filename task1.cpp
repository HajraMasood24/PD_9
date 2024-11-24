#include <iostream>
using namespace std;
bool tf(int arr[],int l);
main()
{
    int l;
    cout<<"Enter the length of array:";
    cin>>l;
    int arr[l];
    
    for(int i=0;i<l;i++)
    {
        cout<<"Enter Number:";
        cin>>arr[i];
    }
    bool result=tf(arr, l);
    cout<<result;
}
bool tf(int arr[],int l)
{
    int t;
    
   for(int j=0;j<l-1;j++)
    {
    for(int i=0;i<l-j-1 ;i++){
        if(arr[i]>arr[i+1]){
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
        }
    }
    for (int k=0;k<l-1 ;k++){
        int x=arr[k];
        int y=arr[k+1];
        if((x+1)!=y)
        {
            return false;
           
        }
        
    }

    return true;
}
