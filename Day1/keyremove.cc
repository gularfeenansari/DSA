//this is about removing a key fom array

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,49,7,1,1,1,1};
    int n =sizeof(a)/sizeof(int);
    int j=n-1,key;

    cin>>key;
    
    for(int i=0;i<=j;i++)
    {
        if(a[i]==key)
        {
            swap(a[i],a[j]);
            j--;
            i--;
        }
    }

     for(int i=0;i<=j;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}