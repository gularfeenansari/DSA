class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l=s.length();
        char arr[l];
        string ss="";
        for(int i=0;i<indices.size();i++)
        {
            arr[indices[i]] = s[i];
        }
        
        for(int i=0;i<indices.size();i++)
        {
            ss+=arr[i];
        }
        
        return ss;
        
        
    }
};
