#include <iostream>
using namespace std;
int rotation(string arr[],int l);
main()
{
    int l;
    cout<<"Enter the length of array:";
    cin>>l;
    string arr[l];
    for(int i=0;i<l;i++)
    {
        cout<<"Enter direction:";
        cin>>arr[i];
    }
    int ttl=rotation(arr, l);
    cout<<ttl;
}
int rotation(string arr[],int l)
{
    int add,sum;
   
    for(int i=0;i<l;i++){
        if(arr[i]=="right")
        {
            sum+=90;
        }
        if(arr[i]=="left")
        {
            sum-=90;
        }
    }
    add= abs(sum);
    add/=360;
    return add;
}
