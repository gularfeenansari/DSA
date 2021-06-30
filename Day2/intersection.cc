#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<int,int> mp;
    vector<int> a={1,2,3,5,7,8,9};
    vector<int> b={1,3,5,6};
    vector<int> inter;
    for(int i=0;i<a.size();i++)
    {
       mp[a[i]] = 1; 
    }

    for(int i=0;i<b.size();i++)
    {
       mp[b[i]]++; 
    }

    for(int i=0;i<a.size();i++)
    {
       if(mp[a[i]]>=2)
       {
           inter.push_back(a[i]);
       } 
    }

    
    for(int i=0;i<inter.size();i++)
    {
        cout<<inter[i]<<"  ";
    }
    return 0;
}