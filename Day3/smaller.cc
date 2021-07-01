class Solution {
public:
    int linsearch(vector<int> arr,int x)
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                return i;
            }
        }
        cout<<"not found;";
        return -1;
    }
    
 

    
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {            
            result.push_back(nums[i]);
        }
        
        sort(result.begin(),result.end());
        
        for(int i=0;i<nums.size();i++)
        {
            
            int index = Search(result,nums[i]);
            cout<<index;
            nums[i] = index;
        }
        
        return nums;
    }
};
