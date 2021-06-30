#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t_max,max,id;
    vector<vector<int>> a={{1,2,3,4},{4,5,6,4},{7,8,9,5}};
    for(int i=0;i<a.size();i++)
    {
        max=0;
        for(int j=0;j<a[0].size();j++)
        {
             max+=a[i][j];
        }
        if(max>t_max)
        {
            t_max = max;
            id = i+1;
        }
    }
    cout<<id;
    return 0;
}