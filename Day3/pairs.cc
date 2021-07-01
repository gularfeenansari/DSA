class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<pair<int,int>> pp;
        vector<int> final_list;
        int n=nums.size();
        
        for(int i=0;(i*2)<n && (i*2+1)<n;i++)
        {
            pp.push_back(make_pair(nums[i*2],nums[i*2+1]));
        }
        
        for(int i=0;i<pp.size();i++)
        {
            for(int j=0;j<pp[i].first;j++)
            {
                final_list.push_back(pp[i].second);
            }
        }
        return final_list;
        
    }
};
