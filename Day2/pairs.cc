#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,49,7,1,1,1,1},pairs=0;
    int n =sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                pairs++;
            }
        }
    }
    cout<<pairs;
    return 0;    
    
}