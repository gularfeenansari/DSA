//this is about shuffling an array 

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,49,7,1};
    int n =sizeof(a)/sizeof(int);
    int j=0,k=n/2;
    int b[n];
    for(int i=0;i<n/2;i++)
    {
        b[j] = a[i];
        j++;
        b[j] = a[k];
        j++;
        k++;
    }

     for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}