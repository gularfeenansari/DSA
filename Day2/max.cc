
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,49,7,1,1,1,1};
    int n =sizeof(a)/sizeof(int);
    bool b[n];
    int max=0,extratoffee;
    cout<<"Enter Extra Toffe";
    cin>>extratoffee;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    

     for(int i=0;i<n;i++)
    {
        if(a[i]+extratoffee>=max)
        {
            b[i]=true;
        }
        else{
            b[i]=false;
        }
        
    }
    

    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}