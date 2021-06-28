//this is about removing duplicates from non decreasing array

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,2,2,2,2,2,3,4,4,4,4,4,4,4,4};
    int n =sizeof(a)/sizeof(int),j=0;

    if(n==1)
    {
        return 1;
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[j])
        {
            j++;
            swap(a[i],a[j]);
            
        }
    }

     for(int i=0;i<=j;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}